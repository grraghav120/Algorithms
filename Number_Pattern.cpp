/*
If n=5
     1
    121
   12321
  1234321
 123454321
By Mayuresh Choudhary
*/
#include<iostream>
using namespace std;

int main(){
    int rows;
    // input no. of rows
    cout<<"Enter no. of rows: "; cin>>rows;
    int k = rows, y = 1;

    for(int i = 1; i<=rows; i++){
        for(int j = k; j>=1; j--){
            cout<<" ";
        }
        for(int t = 1; t<=i; t++){
            cout<<t;
        }
        if(i>=2){
            for(int m = y; m>=1; m--){
                cout<<m;
            }
            y++;
        }
        k--;
        cout<<"\n";
    }

    return 0;
}
