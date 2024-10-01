#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "enter num1:" << endl;
    cin >> num1;
    cout << "enter num2:" << endl;
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw -1;
        }
        double res = (double)num1 / num2;
        cout << "Result: " << res << endl;
    }
    catch (...) // if we do not know the throw type. for any data type ... used
    {
        cout << "Divide by zero is not possible" << endl;
    }
}