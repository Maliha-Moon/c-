#include <iostream>
#include <string> // string header file

using namespace std;

int main()
{
    string firstName = "Maliha "; // Declare a string variable called firstName and initialize it with "Maliha"
    string lastName = "Rahman";   // Declare a string variable called lastName and initialize it with " Rahman"

    string fullName = firstName + lastName; // concatenation of two strings using '+' operator
    cout << "My fullname is : " << fullName << endl;

    string input;
    cout << "Enter your full name : " << endl;
    getline(cin, input); // to read a line of text from user
    cout << input << endl;

    string text = "This is c++ program"; // declare and initialize with a line of text

    cout << "The length of the text is " << text.length() << endl; // length() methode to get size of string
    cout << "The length of the text is " << text.size() << endl;   // size() methode to get size of string
    cout << "3rd character : " << text[2] << endl;                 // print a specific element

    return 0;
}