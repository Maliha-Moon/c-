#include<iostream>
using namespace std;

class Average
{
   private:
   int num1,num2,num3;

   public:
   void setData() //it doesn't need to return any value.
   {
      cin >> num1 >> num2 >> num3;
   }
   void getAverage() //it's responsible for printing the average, not returning it.
   {
      int sum =0;
      sum = num1+num2+num3;
      double avg = static_cast<double> (sum)/3;
      cout << "Average = " << avg << endl;
   }

    // double getAverage()
    // {
    //     return (num1+num2+num3)/3;
    // }

    // void display()
    // {
    //      cout << "Average = " << getAverage() << endl;
    // }
};

int main()
{
    Average obj;
    obj.setData();
    obj.getAverage();
  // cout << "Average = " << obj.getAverage() << endl;
  //obj.display();

    return 0;
}