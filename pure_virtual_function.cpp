#include <iostream>
using namespace std;

class Instrument //abstract class
{
public:
    virtual void makeSound() = 0; 
    //note: pure virtual function forces every derived class to make their own implementation of virtual function
   // note: Classes derived from abstract classes need to implement the pure virtual functions of these classes.
};

class Accordian : public Instrument
{
public:
    void makeSound()
    {
        cout << "Accordian is playing..." << endl;
    }
};

class Piano: public Instrument
{
    public:
     void makeSound()
    {
        cout << "Piano is playing..." << endl;
    }
};

class Music: public Instrument
// note:  derived class fails to implement any of the pure virtual functions,
// it will also be considered an abstract class, and you won't be able to create instances of it.
{
    public:
     void makeSound1()
    {
        cout << "Musiccc..." << endl;
    }
};

int main()
{

    Instrument *i1; // = new Accordian();
    Accordian a1;
    i1 = &a1;
    //i1->makeSound();

    Instrument *i2; // = new Piano();
    Piano p1;
    i2 = &p1;
    //i2->makeSound();

    Instrument * instrument[2] = {i1,i2};
    for(int i=0; i<2;i++)
    {
        instrument[i]->makeSound();
    }
    
    
   // Music m1; // note: not allowed as we do not override pure virtual function in Music derived class

    return 0;
}