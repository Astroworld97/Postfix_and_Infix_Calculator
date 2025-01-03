#include <iostream>
#include <stack>
#include "helper_functions.h"
using namespace std;

//add logic for convertToPostfix(infix)
string convertInfixToPostfix(string infixString)
{
    stack<char> operatorStack;
    string postfixString = "";
    char currChar;
    for(int i=0; i<infixString.length(); i++)
    {
        currChar = infixString[i];
        if(isalnum(currChar))
        {
            postfixString += currChar;
        }
        else if(currChar=='^')
        {
            operatorStack.push(currChar);
        }
        else if(isOperatorExcludingExponent(currChar))
        {

        }
        else
        {

        }
    }

    return postfixString;
}

