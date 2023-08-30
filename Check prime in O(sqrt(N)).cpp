#include <bits/stdc++.h>
bool isPrime(int n)
{
	if(n==1) return false;
	if(n==2) return true;
	int c=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) c++;
	}
	if(c>=1) return false;
	return true;
	// Write your code here.
}
