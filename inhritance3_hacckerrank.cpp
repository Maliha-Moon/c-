#include <iostream>
using namespace std;

class Triangle
{
public:
    void triangle()
    {
        cout << "I am a triangle" << endl;
    }
};

class Isosceles : public Triangle
{
public:
    void isosceles()
    {

        cout << "I am an isosceles triangle" << endl;
        triangle();
    }
};

class Equilateral : public Isosceles
{
public:
    void equilateral()
    {

        cout << "I am an equilateral triangle" << endl;
        isosceles();
    }
};

int main()
{
    Equilateral obj;
    obj.equilateral();

    return 0;
}
