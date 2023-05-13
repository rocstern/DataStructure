#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../linked/LinkedStack.h"
#include "InfixToPostfix.h"


int GetOpPrec(char op)
{
    switch(op)
    {
        case '/':
        case '*':
            return 5;
        case '+':
        case '-':
            return 3;
        case '(':
            return 1;
    }
    return -1;
}


int WhoPrecOp(char op1, char op2)
{
    int op1Prec = GetOpPrec(op1);
    int op2Prec = GetOpPrec(op2);


    if(op1Prec > op2Prec)
        return 1;
    else if(op1Prec < op2Prec)
        return -1;
    else
        return 0; // op1 == op2
}


void ConvToPRNExp(char exp[])
{
    Stack stack;
    int expLen = strlen(exp);
    char * convExp = (char *)malloc(sizeof(expLen+1));

    int i, idx = 0;
    char tok, popOp;

    memset()

    











}