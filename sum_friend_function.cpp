#include <iostream>
using namespace std;

class Number
{
private:
    int n;

public:
    Number()
    {
        cin >> n;
    }

    friend int sum(Number &obj);
};

int sum(Number &obj)
{
    int sum =0;
    for (int i = 1; i <= obj.n; i+=2)
    {
        //if (i % 2 != 0)
        sum = sum + i;
    }

    return sum;
}

int main()
{
    Number obj;
   int odd = sum(obj);
   cout << "sum = " << odd <<endl;

   return 0;
}