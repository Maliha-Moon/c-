#include <iostream>

using namespace std;

class Number
{
private:
    int x;

public:
    Number()
    {
        cin >> x;
    }

    
    friend void cube(Number &obj);
};

void cube(Number &obj)
{ 
    for (int i = 1; i <= obj.x; i++)
        {
            cout << "Cube = " << i * i * i << endl;
        }
}

int main()
{
    Number num;
    cube(num);

    return 0;
}
