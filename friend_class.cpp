#include<iostream>
using namespace std;


class c1; //forward declaration
class c2{
    public:
    void sum(c1); //prototype // member function
//     void sum(c1 o1){
//         cout << "The summation of a and b: " << o1.a + o1.b << endl;
//     }
//    void display(c1 o1){
//       cout << o1.a << endl << o1.b << endl;
//    }
};

class c1{
    private:
       int a,b;
    public:
      void setAB(int x,int y)
    {
        a=x;
        b=y;
    }

    friend void c2::sum(c1 o1); // member function of class C2
};

void c2 :: sum(c1 o1) 
{
    cout <<"The summation of a and b: " << o1.a + o1.b << endl;
}
int main()
{
    c1 obj1;
    obj1.setAB(10,20);
    c2 obj2;
    obj2.sum(obj1);
    return 0;

}