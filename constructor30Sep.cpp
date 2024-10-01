#include <iostream>
using namespace std;

class person // declare class
{
private:         // access modifiers
    string name; // data members
    int id;

public:
    person(string a, int b) // Parameterized constructor
    {
        name = a;
        id = b;
        cout << name << " " << id << endl;
    }
};

int main()
{

    person p1("Ayan", 2000080); 

    return 0;
}