#include "antlr4-runtime.h"
#include "KiepskiLangLexer.h"
#include "KiepskiLangParser.h"
#include <iostream>
#include <stdexcept>

using namespace antlr4;

class KiepskiLangErrorListener : public BaseErrorListener {
public: 
	void syntaxError(Recognizer* recognizer, Token* offendingSymbol, size_t line,
		size_t charPositionInLine, const std::string& msg, std::exception_ptr e) override {
		std::cerr << "Error in line " << line << ":" << charPositionInLine << " - " << msg << std::endl;
		exit(1);
	}
};