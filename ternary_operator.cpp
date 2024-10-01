#include<iostream>
#include<string>

using namespace std;

int main()
{
    int age = 22;
    string vote =(age > 18) ? "Eligible for vote" : "Not eligible for vote"; // cz it store string literal
    cout << vote << endl;

    int time = 20;
    string result = (time < 18) ? "Good Morning" : "Good evening";
    cout << result << endl;

    int num1 =70;
    string grade = (num1 >= 80) ? "A+" : (num1 >= 70)? "A" : "A-";
    cout << grade ;
    return 0;

}