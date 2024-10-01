#include <iostream>
using namespace std;

int main()
{
    unsigned int num_1 = 10; // only positive integer
    int num1 = 10;
    int num2 = num1 >> 2; // right shift operator
    int num3 = num1 << 3; // left shift operator
    int num4 = 12;

    cout << "Right shift = " << num2 << endl; //print right shift value
    cout << "Left shift = " << num3 << endl;
    cout << "10 & 12 = " << (num1 & num4) << endl; // bitwise AND operator
    cout << "10 | 12 = " << (num1 | num4) << endl; // bitwise OR operator
    cout << "10 ^ 12 = " << (num1 ^ num4) << endl; // bitwise XOR operator
    // cout << "~10 = " << (~num_1) << endl;          // big positive number
    // cout << "~10 = " << (~num1) << endl;           // negative number

    return 0;
}
