#include <iostream>
using namespace std;

template <class T, int size> // Class template definition
class Array
{
public:
    T array[size];      // declare array of T type
    void fill(T value); // Function prototype

    T &pos(int index)
    {
        return array[index];
    }
};
template <class T, int size>
void Array<T, size>::fill(T value) // define function outside class template
{
    for (int i = 0; i < size; i++)
        array[i] = value;
}

int main()
{
    Array<int, 5> intArr;                             // Instantiate of class template and determine T as integer
    intArr.fill(2);                                   // Fill the integer array by passing argument 2
    cout << "intArray[4]: " << intArr.pos(4) << endl; // Access and print the value at index 4 in the integer array

    Array<string, 8> strArr; // Instantiate of class template and determine T as string
    strArr.fill("abc");      // Fill the string array by passing argument "abc"
    strArr.pos(6) = "123";   // Modify the value at index 6 in the string array

    for (int i = 0; i < 8; i++)
        cout << "strArr[" << i << "]" << strArr.pos(i) << endl; // print elements
    return 0;
}
