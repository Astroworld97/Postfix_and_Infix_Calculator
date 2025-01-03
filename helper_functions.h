#ifndef HELPER_FUNCTIONS_H
#define HELPER_FUNCTIONS_H

using namespace std;

bool isDelim(char c);
bool isOperatorExcludingExponent(char c);
bool isLeftDelim(char c);
bool isRightDelim(char c);
bool matchesDelim(char c1, char c2);
bool isBalanced(string inputStr);

#endif