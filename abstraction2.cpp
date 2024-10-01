#include <iostream>
using namespace std;

class Smartphone
{
    // abstract base class
    // note: we cannot create objects of abstract base class but we can create pointers of abstract classes
    // note: has at least one pure virtual function
    // user only see functionality(abstract class)
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};

class Android : public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "Android selfie" << endl;
    }

    void MakeACall()
    {
        cout << "Android calling" << endl;
    }
};

class Iphone : public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "Iphone selfie" << endl;
    }

    void MakeACall()
    {
        cout << "Iphone calling" << endl;
    }
};

int main()
{
    Smartphone *sptr;
    // Smartphone *sptr = new Android;
    Android a1;
    sptr = &a1;
    sptr->TakeASelfie();
    sptr->MakeACall();

    Iphone i1;
    sptr = &i1;
    sptr->TakeASelfie();
    sptr->MakeACall();
}