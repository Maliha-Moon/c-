#include <iostream>  //header file
using namespace std; // standard namespace

int x;     // declare global variable
int main() // programm execution begins from here
{
    // declare local variables
    int num1;         // integer data type
    float num2;       // float data type
    double num3;      // double data type
    string name;      // string data type
    const int y = 10; // constant variable

    cout << "Enter x:" << endl; // ask user to enter value
    cin >> x;                   // get user input
    cout << "Enter num1:" << endl;
    cin >> num1;
    cout << "Enter num2:" << endl;
    cin >> num2;
    cout << "Enter num3:" << endl;
    cin >> num3;
    cout << "Enter name:" << endl;
    cin >> name;

    // print values
    // endl indicates new line
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "name = " << name << endl;
    cout << "y = " << y << endl;

    return 0; // end of main function
}