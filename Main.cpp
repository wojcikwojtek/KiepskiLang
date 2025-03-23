#include "Main.h"
#include <iostream>
#include "antlr4-runtime.h"
#include "Antlr4/KiepskiLangLexer.h"
#include "Antlr4/KiepskiLangParser.h"
#include "Antlr4/LLVMGenerator.h"

using namespace antlr4;

int main()
{
    std::ifstream stream;
    stream.open("C:\\Users\\wojte\\Desktop\\Wojtek\\studiapw\\JFiK\\KiepskiLang\\example.kiepski");

    ANTLRInputStream input(stream);
    KiepskiLangLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    KiepskiLangParser parser(&tokens);

    KiepskiLangParser::ProgramContext* tree = parser.program();

    // Opcjonalnie wypisz drzewo
    std::cout << tree->toStringTree(&parser) << std::endl;

    LLVMGenerator visitor;
    visitor.visitProgram(tree);
}
