#include <iostream>
using namespace std;
// // //class C3;

// class C1{
//     private:
//     int a;
//     public:
//     void setdata(int x)
//     {
//         a=x;
//     }
//     void display()
//     {
//         cout <<"a="<<a<<endl;
//     }
   
// };
// class C2{
//     private:
//     int a;
//     public:
//     void setdata(int x)
//     {
//         a=x;
    
// };

// // class C3{
// //     public:
// //     void SwapC1C2(C1 &o1,C2 &o2)
// // {
// //     int temp = o1.a;
// //     o1.a = o2.a;
// //     o2.a = temp;
// // }
// // };



// // int main()
// // {
// //     C1 obj1;
// //     C2 obj2;
// //     obj1.setdata(10);
// //      obj2.setdata(20);
// //     obj1.display();
// //     obj2.display();
// //    C3 obj3;
// //    obj3.SwapC1C2(obj1,obj2);
// //     obj1.display();
// //     obj2.display();
// //     return 0;

// // }
class C1;
class C2{
    public:
    void sum(C1 o1);

};
class C1{
    private:
    int a;
    public:
    void setdata(int x)
    {
         a=x;
}
friend void C2::sum(C1 o1);
};

void C2::sum(C1 o1)
{
    return (o1.a+10);
}

