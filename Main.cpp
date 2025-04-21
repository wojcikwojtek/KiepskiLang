#include "Main.h"
#include <iostream>
#include "antlr4-runtime.h"
#include "Antlr4/KiepskiLangLexer.h"
#include "Antlr4/KiepskiLangParser.h"
#include "Antlr4/LLVMGenerator.h"
#include "Antlr4/KiepskiLangErrorListener.h"

using namespace antlr4;

int main()
{
    try {
        std::ifstream stream;
        stream.open("C:\\Users\\wojte\\Desktop\\Wojtek\\studiapw\\JFiK\\KiepskiLang\\example.kiepski");

        ANTLRInputStream input(stream);
        KiepskiLangLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        KiepskiLangParser parser(&tokens);

        KiepskiLangErrorListener errorListener;
        lexer.removeErrorListeners();
        lexer.addErrorListener(&errorListener);
        parser.removeErrorListeners();
        parser.addErrorListener(&errorListener);

        KiepskiLangParser::ProgramContext* tree = parser.program();

        // Opcjonalnie wypisz drzewo
        std::cout << tree->toStringTree(&parser) << std::endl;

        LLVMGenerator visitor;
        visitor.visitProgram(tree);
    }
    catch (SyntaxException e) {
        std::cout << e.what() << std::endl;
    }
    catch (CompilationException e) {
        std::cout << e.what() << std::endl;
    }
}
