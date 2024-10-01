//A friend function can access the private and protected data of a class.It is not a member of a class
#include<iostream>
using namespace std;

class Complax{
  int a,b;
  public:
  void setNumber(int x,int y)
  {
    a=x;
    b=y;
  }
  void printNumber()
  {
     cout << a<<" + "<<b<<"i"<<endl;
  }

  friend Complax sumComplex(Complax c1,Complax c2);
   
}; 

Complax sumComplex(Complax c1,Complax c2)
{
   //***it cannot access the members directly by their names and need object_name.member_name to access any member.***
   Complax c3;
   c3.setNumber(c1.a+c2.a,c1.b+c2.b);
   return c3;
   //return (c1.a+c2.b,c1.b+c2.b); // this will return integer which is not same with the function return type
}

int main()
{
   Complax c1,c2,sum;
   c1.setNumber(3,4);
   c1.printNumber();

   c2.setNumber(5,8);
   c2.printNumber();
   
   sum = sumComplex(c1,c2); // call as normal function
   //cout << "sum is "<<sumComplex(c1,c2)<<endl; // wrong answer if the sum is int type
   sum.printNumber();

   return 0;
}
 
 /* 
 Features of Friend Functions
 1.A friend function is a special function in C++ that in spite of not being a member function of a class has the privilege to access the private and protected data of a class.
 2. A friend function is a non-member function or ordinary function of a class, which is declared as a friend using the keyword “friend” inside the class.
 By declaring a function as a friend, all the access permissions are given to the function.
 3. The keyword “friend” is placed only in the function declaration of the friend function and not in the function definition or call.
 4.A friend function is called like an ordinary function. It cannot be called using the object name and dot operator. However, it may accept the object as an argument whose value it wants to access.
 5. A friend function can be declared in any section of the class i.e. public or private or protected.
 */
 
 
 
 
 
 
   
