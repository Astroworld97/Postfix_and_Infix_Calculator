#include <iostream>
#include <stack>
using namespace std;

bool isDelim(char c)
{
    if (c == '{' || c == '}' || c == '[' || c == ']' || c == '(' || c == ')')
    {
        return true;
    }

    return false;
}

bool isOperatorExcludingExponent(char c)
{
    if (c == '*' || c == '/' || c == '+' || c == '-')
    {
        return true;
    }

    return false;
}

bool isLeftDelim(char c)
{
    if (c == '{' || c == '[' || c == '(')
    {
        return true;
    }

    return false;
}

bool isRightDelim(char c)
{
    if (c == '}' || c == ']' || c == ')')
    {
        return true;
    }

    return false;
}

bool matchesDelim(char c1, char c2)
{
    if (c1 == '{' && c2 == '}' || c1 == '[' && c2 == ']' || c1 == '(' && c2 == ')')
    {
        return true;
    }

    return false;
}

bool isBalanced(string inputStr)
{
    stack<char> balancingStack;
    char currChar;
    for (int i = 0; i < inputStr.length(); i++)
    {
        currChar = inputStr[i];
        if (isLeftDelim(currChar))
        {
            balancingStack.push(currChar);
        }
        if (isRightDelim(currChar))
        {
            if (balancingStack.empty())
            {
                return false;
            }
            else
            {
                char testLeftDelim = balancingStack.top();
                balancingStack.pop();
                return matchesDelim(testLeftDelim, currChar);
            }
        }
    }

    return false;
}

int arithmeticPrecedence(char c)
{
    if(c == '^')
    {
        return 2;
    }
    else if (c == '*' || c == '/')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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

