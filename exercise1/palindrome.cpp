#include <iostream>
#include <string>
using namespace std;

// Function declarations for the check1 and check2 functions.
bool check1(string stringToCheck);
bool check2(string stringToCheck);

// The main function, were the program begins.
int main(int argc, char* argv[])
{
    // If the argument count does not equal 2,
    // then print a usage message.
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0]
             << " <string-to-check>" << endl;
        exit(1);
    }

    // Create a new string named inputString.
    string inputString = argv[1];

    // Call check1 function.
    if (check1(inputString))
    {
        cout << inputString << " is a palindrome according to check 1" << endl;
    }
    else
    {
        cout << inputString << " is NOT a palindrome according to check 1" << endl;
    }

    // Call check2 function.
    if(check2(inputString))
    {
        cout << inputString << " is a palindrome according to check 2" << endl;
    }
    else
    {
        cout << inputString << " is NOT a palindrome according to check 2" << endl;
    }

    return 0;
}

// This function will return true if the input string is a palindrome.
// Algorithm: Iterate from forward to back, and from back to forward, and check that they are the same.
bool check1(string stringToCheck)
{
    int leftpoint = 0;
    int rightpoint = stringToCheck.length() - 1;

    while (leftpoint < rightpoint) {
        if(stringToCheck[leftpoint] != stringToCheck[rightpoint]){
            return false;
        }
    leftpoint ++;
    rightpoint --;
    }
    return true;

}

// This function will return true if the input string is a palindrome.
// Algorithm: Create a copy of the string, in reverse, and check that the copy matches the original.
bool check2(string stringToCheck)
{
  //Using an iterator within the string library to create the reverse string. 
   string revString = string(stringToCheck.rbegin(), stringToCheck.rend());
   
   //Check to see if original string matches the reversed one created above.
   return stringToCheck == revString;

}