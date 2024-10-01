#include <iostream>
using namespace std;

class Rectangle
{
public:
    int width;
    int height;
    void display()
    {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        cin >> width >> height;
    }

    void display()
    {
        cout << width*height << endl;
    }
};

int main()
{
   RectangleArea obj;
   obj.read_input();
   obj.Rectangle::display();
   obj.display();

   return 0; 
}