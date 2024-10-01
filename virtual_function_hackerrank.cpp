#include <iostream>

using namespace std;

class Person
{
protected:
 /* note: the protected access specifier allows derived classes to inherit and use the name and age members
  while still providing a level of encapsulation. It encapsulates the implementation details within the base class
   and allows derived classes to access and manipulate the data appropriately.
 */ 
    string name;
    int age;

public:
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person
{
    int publications;
    static int cur_id;

public:
    void getdata()
    {
        cin >> name >> age >> publications;
        // cur_id++;
        /* note: every time getdata is called for an object of the Professor class, the cur_id is incremented.
         Since cur_id is static, it is shared among all instances of the Professor class.
          As a result, every Professor object will have the same cur_id, which may not be the desired behavior

        */
    }

    void putdata()
    {
        cur_id++;
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

int Professor ::cur_id = 0;

class Student : public Person
{
    int mark[6];
    static int cur_id;
    int sum = 0;

public:
    void getdata()
    {
        cin >> name >> age;
        for (int i = 0; i < 6; i++)
        {
            cin >> mark[i];
            sum += mark[i];
        }

        
    }

    void putdata()
    {
        cur_id++;
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int Student :: cur_id = 0;

int main()
{
    int n,val;
    cin >> n;

    /* Dynamic memory allocation is necessary when the number of objects is determined at runtime (user input in this case). 
    The array of pointers provides flexibility in handling objects of varying types.
    */
    
     Person * ptr[n];
    for(int i=1;i<=n;i++)
    {
        
        cin >> val;

        if(val  == 1){
           ptr[i] = new Professor ;
           /* note:  creating an object of type Professor. However, the key distinction is that it is creating the object on the heap 
           and assigning the address of the newly created object to the array per at index i. 
          */
        }

        else{
            ptr[i] = new Student;
        }

       ptr[i]->getdata();
    }

    for(int i=1;i<=n;i++){
         ptr[i]->putdata();
    }

    return 0;

}