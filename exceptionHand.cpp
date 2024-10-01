#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cin >> num1>>num2;

    try
    {
        if(num2==0)
        { 
            throw -1;
        }
        double result = (double) num1/num2;
        cout <<"Result = " <<result <<endl;
    }
    catch(int num2)
    {
        cout << "Divided by zero is not possible" <<endl;
    }
    return 0;
}