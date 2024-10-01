// Exception Handeling:
// Error:Anything wrong in the code
// 1.Compile Time error: An error in the code while the code is compiling
// 2.Run time Error:Errors which are occuring during the run time
// Exception Handling is a mechanism that can handle the exception.
// Keyword:try,catch ,throw
//1 ta try er jorno multiple catch possible
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << " Enter number 01:";
    cin >> num1;
    cout << " Enter number 02:";
    cin >> num2;
    try
    {
        //a block of code to be tested for errors 
        if (num2 == 0)
        {
            throw -1; //throws an exception when a problem is detected
        }
        double result = (double)num1 / num2;
        cout << "Result:" << result << endl;
    }
    catch(...)//catch (int x) //define a block of code to be executed if an error occurs in the try block.
    {
        cout << "Divide by zero is not possible" << endl;
    }

    return 0;
}