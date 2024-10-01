#include<iostream>
using namespace std;

// int sum(int x,int y)
// {
//     return (x+y);
// }

// void swapOfAB(int &x,int &y)
// {
//     int temp = x;
//     x = y;
//     y = temp;
// }

// int main()
// {
//     int a=10,b=20;
//     int c=sum(a,b);
    
//     cout <<"Before Swap: " <<a<<" "<<b<<endl;
//     swapOfAB(a,b);
//     cout<<"After swap: "<<a<<" "<<b<<endl;

//     return 0;
// }

int main()
{
    int a=10;
    int b=20;

    // int &c = a;

    // cout <<"c="<<c<<" "<<"a="<<a<<endl;
    // c=40;
    // cout <<"c="<<c<<" "<<"a="<<a<<endl;
    // a=90;
    // cout <<"c="<<c<<" "<<"a="<<a<<endl;

    // cout <<"address of a "<<&a<<endl;
    //  cout <<"address of c "<<&c<<endl;

    int *ptr=&a;
    int *ptr1;
    ptr1=&b;

    cout<<"value of ptr is "<<*ptr<<endl;
     cout<<"address of ptr is "<<ptr<<endl;

     *ptr=800;
     cout<<"value of ptr is "<<*ptr<<endl;



}