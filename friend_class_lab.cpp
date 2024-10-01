#include <iostream>
using namespace std;

class PrintResult; // forward declaration

class Circle
{
private:
    double radius;

public:
    void setData()
    {
        cin >> radius;
    }
    void showData()
    {
        cout << " Radius = " << radius << endl;
    }

    friend class PrintResult; // friend class declaration 
};

class PrintResult // define friend class 
{
public:
    double pi;

    void setInfo(double set_pi)
    {
        pi = set_pi;
    }
 
// class PrintResult can access the private members of class Circle.
    void Area(Circle &obj) 
    {
        cout << " Area = " << (pi * obj.radius * obj.radius) << endl; 
    }
};

int main()
{
    Circle c1;
    c1.setData();
    c1.showData();

    PrintResult p1;
    p1.setInfo(3.14);
    p1.Area(c1); // Call the Area() function of the PrintResult class passing the Circle object.

    return 0;
}

