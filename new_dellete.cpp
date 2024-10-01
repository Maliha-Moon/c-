#include <iostream>
using namespace std;

int main()
{
    int *ptr; // declare pointer
    float *ptr1;
    // allocaTE memory dynamically
    //  pointer_variavle = new data_type;
    ptr = new int; // new keyword return address of the alocated memory location
    ptr1 = new float;
    // int *ptr = new int;
    *ptr = 45; //dereference
    *ptr1 = 23.55;
    cout << *ptr << endl;
    cout << *ptr1 << endl;

    int *arr, size;
    cin >> size;
    arr = new int[size]; //return address of the first element of an array
    for (int i = 0; i < size; i++)
    {
        //dereference array
        //cin >> arr[i];
        cin >> *(arr+i); // arr is the address of the first element. It will move i elements space in memory
    }
     for (int i = 0; i < size; i++)
    {
        cout << "array[" << i << "]" << *(arr+i) << endl;
    }

   //deallocate memory
    delete ptr;
    delete ptr1;
    delete[]arr;

    return 0;

    //in class object
    // class_name *pointer = new class_name();
}