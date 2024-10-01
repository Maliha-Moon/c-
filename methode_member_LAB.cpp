#include <iostream>
using namespace std;

class Geometry // create class 
{
public: // access modifiers
        // members of the class
    string topic; // data members or attributes to define properties of an object
    double height;
    double width;

    // member functions or methodes to define behaviour of an object
    void Area();     // declare methode
    void PrintInfo() // inside class definition
    {
        cout << "-----Gemotery------" << endl;
    }
};

// outside class definition using scope resulation operator to tell compiler that Area methode belongs to Geometry class
void Geometry ::Area()
{
    cout << "Area of " << topic << " is " << height * width << endl;
}

int main()
{
    Geometry obj; // instantiated
    obj.topic = "Square"; // access public data members using dot operator and assign values 
    obj.height = 10.00;
    obj.width = 5.5;

    obj.PrintInfo(); // object access and invoke methode using dot operator
    obj.Area();

    return 0;
}
