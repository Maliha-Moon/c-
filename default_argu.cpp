#include<iostream>
using namespace std;

/* A default argument is a value provided in a function declaration that is automatically assigned by the compiler 
   if the calling function doesn’t provide a value for the argument
*/

int function(int a,int b=5,int c=10); // valid. b,c -> default argument. default values get declared to the right in the parameter list.
//int function(int a,int c=10,int b); // invalid

int main()
{
   cout <<  function(1) << endl;
   /* In this case, we pass the value of a as 1
    *  b and c get their values from the default arguments.
    */
   cout << function(1,3) << endl;
   /*  In this case, we pass the value of a as 1,b as 3
    *  c get value from the default arguments.
   */
  cout << function(1,3,7) << endl;
  /* In this case, all three values are
    * passed during the function call. Hence, no
    * default arguments have been used.
    */
   //cout << function() << endl;
   /*  uses both the default parameters
   * as none of the values passed. 
   */

   return 0;
}

int function(int a,int b,int c)
{
    return a+b+c;
}