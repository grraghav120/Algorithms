
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    //how to divide any number by 2 without using the "/" operator
    n=n>>1;
    //this is a bitwise operator which will  right shift the original bits to 1 positions and the new set
    //of the bits is the number which is the result of n/2
    cout<<n;
    //similarly you can multiply by 2
    //by using left shift operator
    n=n<<1;
    cout<<n;
    return 0;
}
