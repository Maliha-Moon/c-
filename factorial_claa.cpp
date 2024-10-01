#include<iostream>
using namespace std;

class Factorial
{
    int n;
    public:
    Factorial()
    {
        cin >> n;
    }
    int Calculation()
    {
        int fact=1;
        if(n == 0 || n == 1)
           return 1;
           else{
        for(int i=n;i>0;i--)
        fact = fact * i;
        return fact; 
        }
    }
    void Display()
    {
        //cout << "Factorial is " << fact <<endl; //for void return type
        cout << "Factorial is " <<Calculation()<<endl;
    }
};

int main()
{
    Factorial obj;
    obj.Display();
    return 0;
}