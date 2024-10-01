#include <iostream>
using namespace std;

int sum(int x, int y);              // Function Prototype
void swapValueofAB(int &x, int &y); // Function Prototype

int main()
{
    int a = 5, b = 17;

    int c = sum(a, b); // calling call by value function and pass variable as arguments
    cout << "sum = " << c << endl;

    cout << "before swap " << a << " " << b << endl;
    swap(a, b); // calling call by reference function and pass variable as arguments
    cout << "after swap " << a << " " << b << endl;

    return 0;
}

// function definition
int sum(int x, int y) // call by value
{
    return x + y;
}

void swapValueofAB(int &x, int &y) // call by reference using reference variable to swap value
{
    int temp = x;
    x = y;
    y = temp;
}
