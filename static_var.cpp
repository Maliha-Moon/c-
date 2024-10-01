#include<iostream>

using namespace std;

class Person
{
    public:
     static int count; // declare. can't assign value. It is class property, not object property.
    //Only one copy of that member is created for the entire class and is shared by all the objects of that class, no matter how many objects are created.
    // each object can modify static var.
    private:
    string name;
    int id;
    int age;
    string gender;
    
    public: 
    void SetInfo(string n, int i, int a, string g) 
    {
        name=n;
        id=i;
        age=a;
        gender=g;
      count++;
    }
   
    void GetInfo()  // present the values
    {
      cout << "Name: " << name << endl;
      cout << "Id: " << id << endl;
      cout << "Age: " << age << endl;
      cout << "Gender: " << gender << endl;
      cout << "count= " << count << endl;
    }

    static int show() //can access only static data member & satic member function
    {
     // cout << "Name: " << name << endl; //throws an error
       cout << count << endl;
    }
};
 
int Person::count = 0;  //Initialize outside class/ explicit definition -> return_type class_name :: static_vaariable_name; default value is 0

int main()
{
    Person obj1; // static var is initialized to zero when object is created

    obj1.SetInfo("Maliha Moon",2345,20,"Female");
    obj1.GetInfo();

    Person obj2;

    obj2.SetInfo("Rayhan Joy",12345,20,"Male");
    obj2.GetInfo();
    
   Person::show();//without creating object.  class_name :: static_member_function_name();

/*
The reason we need Static member function:
1. Static members are frequently used to store information that is shared by all objects in a class. 
2. For instance, you may keep track of the quantity of newly generated objects of a specific class type using a static data member as a counter. 
This static data member can be increased each time an object is generated to keep track of the overall number of objects.
*/

}