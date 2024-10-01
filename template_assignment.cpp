#include <iostream>  //header file
using namespace std; // standard namespace

// Template function for swapping two values of any type

template <class T> // Define generic code by template function to avoid duplicate code

void Swap(T &a, T &b) // Function template for swapping two vars of type T
{
     T temp = a; // Create a temporary variable to hold a
     a = b;      // Swap a and b by assigning temp values
     b = temp;
}

int main() // program execution begains
{
     int a = 5, b = 7; // Define integer variables a and b

     cout << "Integer value:" << endl;
     cout << "a= " << a << " "
          << "b=" << b << endl; // Print initial values

     Swap<int>(a, b); // Call swap, passing int data type, replacing T with int

     cout << "Swapped values:" << endl;
     cout << "a= " << a << " "
          << "b=" << b << endl; // Print swapped values

     char c = 'c', d = 'd'; // Define integer variables c and d

     cout << "Character value:" << endl;
     cout << "c= " << c << " " // Print initial values
          << "d=" << d << endl;

     Swap<char>(c, d); // Call swap, passing char data type, replacing T with char

     cout << "Swapped values:" << endl;
     cout << "c= " << c << " " // Print swapped values
          << "d=" << d << endl;

     float e = 2.5, f = 10.5; // Define float variables e and f

     cout << "Floating value:" << endl;
     cout << "e= " << e << " " // Print initial values
          << "f=" << f << endl;

     Swap<float>(e, f); // Call swap, passing int float type, replacing T with float

     cout << "Swapped values:" << endl;
     cout << "e= " << e << " " // Print swapped values
          << "f=" << f << endl;

     return 0;
}
