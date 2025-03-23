grammar SimpleLang;

program: statement+ ;

statement
    : varDecl ';'
    | expr ';'
    ;

varDecl: 'int' ID '=' expr ;

expr
    : expr '+' expr   # AddExpr
    | INT             # IntLiteral
    | ID              # VarReference
    ;

ID  : [a-zA-Z_][a-zA-Z_0-9]* ;
INT : [0-9]+ ;

WS : [ \t\r\n]+ -> skip ;
