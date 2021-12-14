#include <iostream>
using namespace std;
//conversion function
bool checkPalindrome(string myString){

    int strLength = myString.length();
    int count = 0;
    for (int i = 0; i < strLength/2; ++i)
        if (myString[i] != myString[strLength - i - 1])
            ++count;
    return (count <= 1);
}
//main function
int main()
{
    string myString;
    int keepGoing = 0;
    do {
        cout << "To continue press 1, to stop program press 0:";
        cin >> keepGoing;
        cout << "Enter your string:";
        cin >> myString;
        if (checkPalindrome(myString))
            cout << "The string is almost palindrome." << endl;
        else
            cout << "The string is not almost palindrome." << endl;
    }
    while (keepGoing !=0);
}