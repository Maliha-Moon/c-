#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size:" << endl;
    cin >> size;     // get size of the array from user
    int array[size]; // declare one-dimensional array with size

    cout << "Enter elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i]; // get elements of array from user
    }
    cout << "Array:" << endl;
    for (int i : array) // for each loop
    {
        cout << i << endl;
    }
    cout << "3rd element: " << array[3] << endl; // print any specific element of one-dimensional array

    string food[4] = {"Fish", "Meat", "Rice", "Chicken"}; // array of string

    for (string x : food) // for each loop
    {
        cout << x << endl;
    }
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}}; // multi-dimensional array of string

    for (int i = 0; i < 2; i++) //
    {
        for (int j = 0; j < 4; j++)
        {
            cout << letters[i][j] << endl; // print multidimensional array
        }
    }
    cout << "letters[1][2]: " << letters[1][2] << endl; // print specific element of multi-dimensional array of string
    return 0;
}