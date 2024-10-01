#include<iostream>

using namespace std;
int main()
{
    // int i=100;
    // //int i=0;
    // do {
    //     cout << i << " "; // 100
    //     i++; // 101
    // }
    // while(i<5); 

    for(int i=1 ; i<=2; ++i){ 
        cout << "outer loop : " << i << endl;

        for (int j=1; j<=3; ++j){ 
            cout << "inner loop : " << j << endl;
        }
    }
    return 0;
}