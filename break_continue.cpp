#include<iostream>

using namespace std;
int main(){
    // for(int i=0; i<10; i++){
    //     if(i==4){
    //        // break;
    //     continue;
    // }
    // cout << i << endl;
    // }

    int i=0;
    while(i<10){
        if(i==5){
           // break;
           i++; //6
        continue;
    }
    cout << i << endl;
    i++;
    }
    return 0;
}