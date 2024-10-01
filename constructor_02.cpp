#include<iostream>
using namespace std;

class MyClass{
    public:
    int num1;
    int num2;
    string name;

    public:
    void Info()
    {
    cout << num1 << endl;
    cout << num2 << endl;
    cout << name << endl;
    }

    public:
    //MyClass(int n1,int n2,string n);  // only declare construct methode
    
    MyClass(int n1,int n2,string n) //Since constructor has same name as class name, it run autometically
    {
       num1=n1;
       num2=n2; //attribute = passed parameters
       name=n;
    }

    // MyClass()
    // {
    //     cout << "Enter num1: " ;
    //     cin >> num1;
    //     cout << "Enter num2: " ;
    //     cin >> num2;
    //     cout << "Enter name: " ;
    //     cin >> name;
    // }
};
  // define outside class
//    MyClass::MyClass(int n1,int n2,string n)
//    {
//       num1=n1;
//       num2=n2; //attribute = passed parameters
//       name=n;
//    }

int main()
{
    MyClass obj = MyClass(50,60,"moon"); // object call constructor
    // MyClass obj = MyClass();
    // cout << obj.num1 << endl;
    // cout << obj.num2 << endl;
    // cout << obj.name << endl;
    obj.Info();

    MyClass obj2 = MyClass(100,200,"ayan");
   // MyClass obj2 = MyClass();
     cout << obj2.num1 << endl;
    cout << obj2.num2 << endl;
    cout << obj2.name << endl;
    
    return 0;
}
