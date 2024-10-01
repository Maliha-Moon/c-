#include <iostream>
using namespace std;

class StudentDetail
{
protected:
    int roll;
    int mark[5];
    int sum;

public:
    void data()
    {
        cout << "Enter roll:" << endl;
        cin >> roll;
        cout << "Enter mark:" << endl;
        for (int i = 0; i < 5; i++)
        {
            cin >> mark[i];
        }

        sum = 0;
        for (int i = 0; i < 5; i++)
        {
            sum = sum + mark[i];
        }
    }
};

class SportMark
{
protected:
    int score;

public:
    void data()
    {
        cout << "Enter sport score:" << endl;
        cin >> score;
    }
};

class Result : public StudentDetail, public SportMark
{
public:
    double avg;

    void Average()
    {
        int total = sum + score;
        avg = static_cast<int>(total / 6);
        cout << "Average = " << avg << endl;
    }
};

int main()
{
    Result obj;
    obj.StudentDetail::data();
    obj.SportMark::data();
    obj.Average();

    return 0;
}