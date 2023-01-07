//Aprroch - Greedy
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size(),totalCost=0,gasTotal=0,costTotal=0,result=0;
        for(int i=0;i<n;i++) gasTotal+=gas[i];
        for(int i=0;i<n;i++) costTotal+=cost[i];
        if(gasTotal<costTotal) return -1;
        for(int i=0;i<n;i++){
            totalCost=totalCost+gas[i]-cost[i];
            if(totalCost<0){
                totalCost=0;
                result=i+1;
            }
        }
        return result;
    }
};