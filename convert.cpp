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
    char topOperator;
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
            while(!operatorStack.empty() && arithmeticPrecedence(currChar) <= arithmeticPrecedence(operatorStack.top()))
            {
                postfixString += operatorStack.top();
                operatorStack.pop();
            }

            operatorStack.push(currChar);
        }
        else if(currChar == '(')
        {
            operatorStack.push(currChar);
        }
        else if(currChar == ')')
        {
            topOperator = operatorStack.top();
            operatorStack.pop(); //remember that in C++, pop() returns void, so top() needs to be used before pop()
            while(topOperator != '(')
            {
                postfixString += topOperator;
                topOperator = operatorStack.top();
                operatorStack.pop();
            }
        }
        else
        {
            continue; //ignore unexpected characters
        }
    }
    while(!operatorStack.empty())
    {
        topOperator = operatorStack.top();
        operatorStack.pop();
        postfixString += topOperator;
    }

    return postfixString;
}

