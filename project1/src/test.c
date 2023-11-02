#include <assert.h>
#include <stdio.h>

typedef enum TokenType { FloatDeclaration, IntegerDeclaration, PrintOp, AssignmentOp, PlusOp, MinusOp,
             MulOp, DivOp, Alphabet, IntValue, FloatValue, EOFsymbol } TokenType;

typedef struct Token{
    TokenType type;
    char tok[1025];
}Token;

int main(int argc, char *argv[]){
	
	return 0;
}