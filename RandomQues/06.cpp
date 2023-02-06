#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row,col,k,c=0,f_r,f_c,s_r,s_c;
    cin>>row>>col>>k;
    vector<vector<int>> mat(row,vector<int> (col,0));
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>mat[i][j];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(mat[i][j]==k){
                c++;
                if(c==1){
                    f_r=i;f_c=j;
                }
                if(c==2){
                    s_r=i;s_c=j;
                }
                else break;
            }
        }
    }
    for(int i=(int)min(f_r,s_r);i<=(int)max(s_r,f_r);i++){
        for(int j=(int)min(f_c,s_c);j<=(int)max(s_c,f_c);j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}
