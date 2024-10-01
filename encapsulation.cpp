#include<iostream>

using namespace std;

class Person
{
    //public:
    private: // error cz these members won't be accessed directly outside this class
    string name;
    int id;
    int age;
    string gender;
    
    public:  // method is always public cz it access members
    //To access a private attribute, use public "get" and "set" methods

   // void SetInfo(string n, int i, int a, string g) 
    void SetInfo() // for user input
    {
    
    cout << "Enter name:";
    getline(cin,name);
    cout << "Enter id:";
    cin >> id;
    cout << "Enter age:";
    cin >> age;
    
    cout << "Enter gender:";
    getline(cin,gender);
    getline(cin,gender);
    
    }
   
    void GetInfo()  // present the values
    {
      cout << "Name: " << name << endl;
      cout << "Id: " << id << endl;
      cout << "Age: " << age << endl;
      cout << "Gender: " << gender << endl;
    }
};


int main()
{
    Person obj;

    //obj.SetInfo("Maliha Moon",2345,20,"Female");
    obj.SetInfo();
    
    // variables won't be accessed 

    // cout << "Enter name:";
    // getline(cin,obj.name);
    // cout << "Enter id:";
    // cin >> obj.id;
    // cout << "Enter age:";
    // cin >> obj.age;
    
    // cout << "Enter gender:";
    // getline(cin,obj.gender);
    // getline(cin,obj.gender);

    
    obj.GetInfo();
    
   
}