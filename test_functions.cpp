#include <iostream>
#include "helper_functions.h"
using namespace std;

void testIsDelim() {
    cout << "Testing isDelim:" << endl;
    cout << (isDelim('{') ? "Pass" : "Fail") << endl;
    cout << (isDelim('}') ? "Pass" : "Fail") << endl;
    cout << (isDelim('a') ? "Fail" : "Pass") << endl;
    cout << endl;
}

void testIsOperator() {
    cout << "Testing isOperator:" << endl;
    cout << (isOperator('+') ? "Pass" : "Fail") << endl;
    cout << (isOperator('-') ? "Pass" : "Fail") << endl;
    cout << (isOperator('a') ? "Fail" : "Pass") << endl;
    cout << endl;
}

void testIsBalanced() {
    cout << "Testing isBalanced:" << endl;
    cout << (isBalanced("{}") ? "Pass" : "Fail") << endl;
    cout << (isBalanced("{[()]}") ? "Pass" : "Fail") << endl;
    cout << (isBalanced("{[}]") ? "Fail" : "Pass") << endl;
    cout << (isBalanced("{{") ? "Fail" : "Pass") << endl;
    cout << endl;
}

int testAllFunctions()
{
    testIsDelim();
    testIsOperator();
    testIsBalanced();

    return 0;
}