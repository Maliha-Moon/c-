#include <iostream>
using namespace std;

// abstract base class
// note: we cannot creat object of abstract base class
// note: has at least one pure virtual function 
class CWM
{
protected:
    string title;
    float rating;

public:
    CWM(string s, float r)
    {
        title = s;
        rating = r;
    }

   // pure virtual function (abstract function)
    virtual void display()  = 0; 
};

class CWMVideo : public CWM
{
    float videoLenght;

public:
    CWMVideo(string s, float r, float vl) : CWM(s, r)
    {
        videoLenght = vl;
    }

    void display()
    {
        cout << "video title = " << title << endl;
        cout << "video rating " << rating << " out of 5 star" << endl;
        cout << "Video Lenght = " << videoLenght <<" minutes"<< endl;
    }
};

class CWMText : public CWM
{
    int words;

public:
    CWMText(string s, float r, int wc) : CWM(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "text title = " << title << endl;
        cout << "text rating " << rating << " out of 5 star" << endl;
        cout << "words count = " << words << endl;
    }
};

int main()
{
   string title;
    float rating, vlen;
    int words;

    title = "C plus plus tutorial";
    rating = 4.5;
    vlen = 4.89;

    CWMVideo obj1(title,rating,vlen);
    obj1.display();

    title = "C plus plus tutorial website";
    rating = 4.8;
   int word = 1000;

    CWMText obj2(title,rating,word);
    obj2.display();

    // heirarchical 
    //note:  an array of pointers is created to store pointers to objects of the base class  or its derived classes 
    CWM * ptr[2]; // 2 = number of object that will be stored in pointer
    ptr[0] = &obj1;
    ptr[1] = &obj2;

    ptr[0]->display();
    ptr[1]->display();
}
