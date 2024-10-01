#include <iostream>
using namespace std;
template<class T> // T is a placeholder for data type
class vector
{
public:
    T *arr; //pointer
    int size;

    vector(int m)
    {
        size = m;
        arr = new T[size]; // allocate memory during runtime
    }
   T dotProduct(vector &v)
    {
       T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * arr[i];
            //this->arr[i]: Accesses the i-th element of the array arr belonging to the current object v1
            //arr[i]: elements of another array(not a member of the object) v2
           
        }
         return d;
    }
};

int main()
{
    vector <float>v1(3);
    v1.arr[0] = 4.5;
    v1.arr[1] = 14.3;
    v1.arr[2] = 24.2;

     vector <float>v2(3);
    v2.arr[0] = 1.8;
    v2.arr[1] = 4.4;
    v2.arr[2] = 6.5;
    float a = v1.dotProduct(v2);
    cout << a <<endl;
    return 0;
}