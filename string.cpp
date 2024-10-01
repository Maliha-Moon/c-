#include<iostream> // include iostream header file
#include<string>  // include string header file

using namespace std; // std namespace

int main() 
{
    string firstName = "Maliha ";  // Declare a string variable called firstName and initialize it with "Maliha"
    string lastName = "Rahman";  // Declare a string variable called lastName and initialize it with " Rahman"

    //string fullName = firstName + " " + lastName;
    string fullName = firstName + lastName;
    //string fullName = firstName.append(lastName); // append() function

    cout << "My fullname is : " << fullName << endl;

    string text = "This is c++ program";
    cout << "The length of the text is " << text.length() << endl;
     cout << "The length of the text is " << text.size() << endl;
     cout << "3rd character : " << text[2] << endl;

    string input;
    cout << "Enter your full name : " << endl;
    getline(cin,input);
    cout << input << endl;

    return 0;  // The program returns 0 to indicate successful execution

}