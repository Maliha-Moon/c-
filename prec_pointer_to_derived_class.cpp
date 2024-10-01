/* A pointer to a derived class is a pointer of a base class pointing to a derived class, but it will hold its aspect.
  This pointer of the base class will be able to temper functions and variables of its own class
  and can still point to the derived class object.
*/

#include <iostream>

using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "var_base= " << var_base << endl;
        cout << "Display Base Class" << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
         cout << "var_base= " << var_base << endl;
        cout << "var_derived= " << var_derived << endl;
        cout << "Display derived Class" << endl;
    }
};

int main()
{

    BaseClass *base_class_pointer; // creat a pointer of base class
    BaseClass obj_base;

    DerivedClass obj_derived;

    // pointing to derived class
    base_class_pointer = &obj_derived; // pointer of base class can point to the object of derived class

    // only access that(base) class member's, [ cannot access derived class member's ]
    base_class_pointer->var_base = 30;

    //As base-class pointer cannot access the derived class variable. 
    // base_class_pointer->var_derived = 130; // throw an error


    base_class_pointer->display(); // call method of base class cz it is a pointer of base class -> late binding
    base_class_pointer->var_base = 50; // update previous value

    // derived class pointer
    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 130; 
    // note: pointer of derived class can access public member of base class as it inherited from base class
    derived_class_pointer->var_base = 230;
    derived_class_pointer->display();

   // note: checks which type of pointer it is / which class(type) it belongs to & then bind with function(s)
   
}