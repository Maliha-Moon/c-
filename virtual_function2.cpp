#include <iostream>
using namespace std;

// Base class
class Instrument
{
    // Access modifiers
public:
    // Declared as virtual function so that makeSound() can be overridden in derived classes
    virtual void makeSound()
    {
        // Default implementation
        cout << "Instrument playing..." << endl;
    }
};

// Derived class Accordian inherits from Base class Instrument
class Accordian : public Instrument
{
public:
    // Override makeSound()
    void makeSound()
    {
        // 
        cout << "Accordian playing..." << endl;
    }
};

class Piano : public Instrument
{
public:
    void makeSound()
    {
        cout << "Piano playing..." << endl;
    }
};

int main()
{
    Instrument *i1; // = new Accordian();
    Accordian a1;
    i1 = &a1;
    i1->makeSound();

    Piano p1;
    i1 = &p1;
    i1->makeSound();

    return 0;
}