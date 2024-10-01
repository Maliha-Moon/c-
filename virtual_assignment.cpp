#include <iostream> // hearder file

using namespace std; // standard Namespace

// Base class
class Library
{
    // Access modifiers
public:
    //Data members
    string name;
    int bookNo;
     
    // Member function 
    // Declared as virtual function so that getData() and Show() can be overridden in derived classes
    virtual void getData() {}
    virtual void Show()
    {
        // Default implementation
        cout << "...Books..." << endl;
    }
};

// Derived class Fiction inherits from Base class Library
class Fiction : public Library
{
public:
  // override getData() function to take input from user
    void getData()
    {
        // get user input for Fiction 
        getline(cin, name);
        cin >> bookNo;
    }

  // override Show() function to display message
    void Show()
    {
        cout << "...Books..." << endl;
        // extend implementation for Fiction
        cout << "Fiction Category :" << endl
             << "Book: " << name << endl
             << "Book No: " << bookNo << endl;
    }
};

// Derived class NonFiction inherits from Base class Library
class NonFiction : public Library
{
public:

// override getData() function to take input from user
    void getData()
    {
        // Get user input for NonFiction
        getline(cin, name);
        getline(cin, name);
        cin >> bookNo;
    }

    // override Show() function to display message
    void Show()
    {
        cout << "...Books..." << endl;
        // Custom implementation for NonFiction
        cout << "Non-Fiction Category :" << endl
             << "Book: " << name << endl
             << "Book No: " << bookNo << endl;
    }
};

int main()
{
    // Creat base class pointer to achieve polymorphism
    Library *ptr;

    
    Fiction obj1; // Instantiate a Fiction object
    ptr = &obj1; // pointer of base class point to the Fiction object for dynamic polymorphism

    // Virtual function, binded at runtime
    ptr->getData(); // Access and call apropiate function for Fiction
    ptr->Show(); // Access and call appropiate function for Fiction

    NonFiction obj2; // Instantiate a NonFiction object
    ptr = &obj2; // pointer of base class point to the NonFiction object for dynamic polymorphism

    // Virtual function, binded at runtime
    ptr->getData(); // Access and call appropiate Nonfunction for Fiction
    ptr->Show(); // Access and call appropiate Nonfunction for Fiction

    return 0; // return statement
}
