#include<iostream>
#include<string>

using namespace std;
int main()
{
    int num1 = 40;
    string str = "50";
   int num2 = stoi(str); // convert string into integer . stoi() returns integer value

   string str2 = "30 banana";
   int num3 = stoi(str2); //converts all the integer values of str2 till the first non-integer value that is space " " to int

   string str3 = "four 4";
   int num4 = stoi(str3); //If the starting character is a non-integer value or whitespace the stoi() function terminates, runtime error

    cout << num1 + num2 ;
    return 0;
}