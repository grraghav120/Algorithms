/*
If n=5
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
By Mayuresh Choudhary
*/
#include<iostream>
using namespace std;

int main(){
    int rows;
    // input no. of rows
    cout<<"Enter no. of rows: "; cin>>rows;
    int k = rows, y = 0;
    char alpha = 'A';

    for(int i = 0; i<rows; i++){
        for(int j = k; j>=1; j--){
            cout<<" ";
        }
        for(int t = 0; t<=i; t++){
            cout<<char('A'+t);
        }
        if(i>=1){
            for(int m = y; m>=0; m--){
                cout<<char(alpha+m);
            }
            y++;
        }
        k--;
        cout<<"\n";
    }

    return 0;
}
