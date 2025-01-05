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

void testIsOperatorExcludingExponent() {
    cout << "Testing isOperator:" << endl;
    cout << (isOperatorExcludingExponent('+') ? "Pass" : "Fail") << endl;
    cout << (isOperatorExcludingExponent('-') ? "Pass" : "Fail") << endl;
    cout << (isOperatorExcludingExponent('a') ? "Fail" : "Pass") << endl;
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

void testConvertInfixToPostfix(){
    cout << "Testing convertInfixToPostfix:" << endl;

    string retvalTestCase1 = convertInfixToPostfix("A+B");
    bool testCase1Result = retvalTestCase1 == "AB+";
    cout << (testCase1Result ? "Pass" : "Fail") << endl;

    string retvalTestCase2 = convertInfixToPostfix("A+B*C");
    bool testCase2Result = retvalTestCase2 == "ABC*+";
    cout << (testCase2Result ? "Pass" : "Fail") << endl;

    string retvalTestCase3 = convertInfixToPostfix("(A+B)*C");
    bool testCase3Result = retvalTestCase3 == "AB+C*";
    cout << (testCase3Result ? "Pass" : "Fail") << endl;

    string retvalTestCase4 = convertInfixToPostfix("(A+(B*C))");
    bool testCase4Result = retvalTestCase4 == "ABC*+";
    cout << (testCase4Result ? "Pass" : "Fail") << endl;

    string retvalTestCase5 = convertInfixToPostfix("A-B+C");
    bool testCase5Result = retvalTestCase5 == "AB-C+";
    cout << (testCase5Result ? "Pass" : "Fail") << endl;

    string retvalTestCase6 = convertInfixToPostfix("A*(B+C)");
    bool testCase6Result = retvalTestCase6 == "ABC+*";
    cout << (testCase6Result ? "Pass" : "Fail") << endl;

    string retvalTestCase7 = convertInfixToPostfix("(A+B)*(C-D)+(E/F)");
    bool testCase7Result = retvalTestCase7 == "AB+CD-*EF/+";
    cout << (testCase7Result ? "Pass" : "Fail") << endl;

    string retvalTestCase8 = convertInfixToPostfix("A");
    bool testCase8Result = retvalTestCase8 == "A";
    cout << (testCase8Result ? "Pass" : "Fail") << endl;

    string retvalTestCase9 = convertInfixToPostfix("A+B*C/D");
    bool testCase9Result = retvalTestCase9 == "ABC*D/+";
    cout << (testCase9Result ? "Pass" : "Fail") << endl;

    string retvalTestCase10 = convertInfixToPostfix("A+B*(C-D)/(E+F)");
    bool testCase10Result = retvalTestCase10 == "ABCD-*EF+/+";
    cout << (testCase10Result ? "Pass" : "Fail") << endl;

    string retvalTestCase11 = convertInfixToPostfix("");
    bool testCase11Result = retvalTestCase11 == "";
    cout << (testCase11Result ? "Pass" : "Fail") << endl;

    string retvalTestCase12 = convertInfixToPostfix("A+B*D-E");
    bool testCase12Result = retvalTestCase12 == "ABD*+E-";
    cout << (testCase12Result ? "Pass" : "Fail") << endl;

    cout << endl;
}

void testAllFunctions()
{
    // testIsDelim();
    // testIsOperatorExcludingExponent();
    // testIsBalanced();
    testConvertInfixToPostfix();

}