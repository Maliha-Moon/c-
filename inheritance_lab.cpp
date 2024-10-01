#include <iostream>
using namespace std;

class Picnic; 

class Arrangement // define class
{
private:
    string place;
    int budget;

public:
    void setData(string set_place, int set_budget)
    {
        place = set_place;
        budget = set_budget;
    }

    void Show()
    {
        cout << "place = " << place << endl;
        cout << "budget = " << budget << endl;
    }

    friend Picnic;
};

class Picnic
{
    private:
    string food;
   
    public:
       void setInfo(string set_food)
       {
        food = set_food;
       }

       
};
