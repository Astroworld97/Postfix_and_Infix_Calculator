#include <iostream>
#include <stack>
using namespace std;

void printCharFromString()
{
    string fruit = "banana";
    char letter = fruit[1];
    cout << letter << endl;
}

bool isDelim(char c)
{
    if (c == '{' || c == '}' || c == '[' || c == ']' || c == '(' || c == ')')
    {
        return true;
    }

    return false;
}

bool isOperator(char c)
{
    if (c == '^' || c == '*' || c == '/' || c == '+' || c == '-')
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
    for(int i=0; i<inputStr.length(); i++)
    {
        currChar = inputStr[i];
        if(isLeftDelim(currChar))
        {
            balancingStack.push(currChar);
        }
        if(isRightDelim(currChar))
        {
            if(balancingStack.empty()){
                return false;
            }else{
                balancingStack.top();

            }
        }
    }

    return false;
}

int main()
{
    // printCharFromString();
    cout << isalnum('a');
}