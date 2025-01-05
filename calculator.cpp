#include <iostream>
#include <stack>
#include <sstream>
#include <string>
#include <vector>
#include "test_functions.h"
using namespace std;

int mainMenu()
{
    cout << ("Welcome!\n");
    cout << ("Choose the calculator you would like to use:\n");
    cout << ("1. Prefix Calculator\n");
    cout << ("2. Infix Calculator\n");
    cout << ("3. Postfix Calculator\n");
    cout << ("4. Exit\n");
    int n;
    cin >> n;
    cin.ignore(1000, '\n'); // Clear any leftover characters in the input buffer
    return n;
}

vector<string> parseInputString(string s)
{
    stringstream ss(s);
    vector<string> retval;
    string tempWord;
    while (getline(ss, tempWord, ' ')) {
        retval.push_back(tempWord);
    }
    return retval;
}

int main()
{
    testAllFunctions();
    return 0;
}

// int main(){
//     string testStr = "See your money wanna stay for your meal";
//     vector<string> testVect = parseInputString(testStr);
//     for (string i : testVect){
//         cout << i + "\n";
//     }
//     return 0;
// }

//actual main function below

// int main()
// {

//     int userInput;
//     bool loopVariable = true;

//     while (loopVariable)
//     {
//         userInput = mainMenu();
//         switch (userInput)
//         {
//         case 1:
//         {
//             // this is the prefix calculator logic
//             stack<int> prefixStack;
//         }
//         case 2:
//         {
//             // this is the infix calculator logic
//             stack<int> infixStack;
//             stack<int> infixStack2;
//         }
//         case 3:
//         {
//             // this is the postfix calculator logic
//             stack<int> postfixStack;
//         }
//         case 4:
//         {
//             loopVariable = false;
//             break;
//         }
//         default:
//         {
//             cout << "Please enter a valid input!\n";
//             break;
//         }
//         }
//     }

//     return 0;
// }