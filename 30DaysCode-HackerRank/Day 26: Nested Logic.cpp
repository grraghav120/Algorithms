#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int rd,rm,ry,dd,dm,dy;
    cin>>rd>>rm>>ry>>dd>>dm>>dy;
    if(dy>ry){
        cout<<0<<'\n';
    }
    else if(dy<ry){
        cout<<10000<<'\n';
    }
    else{
        if(rm>dm){
            cout<<500*(rm-dm)<<'\n';
        }
        else if(rm<dm){
            cout<<0<<'\n';
        }
        else{
            if(rd<=dd){
                cout<<0<<'\n';
            }
            else{
                cout<<15*(rd-dd)<<'\n';
            }
        }
    }
    return 0;
}
