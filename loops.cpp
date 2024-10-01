#include <iostream>
using namespace std;

int main()
{

    int time = 20;
    string result = (time < 18) ? "Good day." : "Good evening."; //Ternary operator to evalute message based on condition
    cout << result << endl; // print result
    return 0;
}