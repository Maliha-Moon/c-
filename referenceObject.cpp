#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
    string brand;
    int year;
    // Constructor
    Car(string b, int y)
    {
        brand = b;
        year = y;
    }
    // Print method
    void printInfo()
    {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main()
{
    // Creating objects
    Car car1("Toyota", 2022);
    Car car2("Honda", 2021);
    // Creating references to objects
    Car &refCar1 = car1;
    Car &refCar2 = car2;
    // Displaying information using references
    cout << "Car Information using References:" << endl;
    refCar1.printInfo();
    refCar2.printInfo();
    // Modifying objects through references
    refCar1.brand = "Ford";
    refCar2.year = 2023;
    // Displaying modified information
    cout << "Modified Car Information:" << endl;
    car1.printInfo(); // Original object is modified
    car2.printInfo(); // Original object is modified
    return 0;
}
