int binary(int n){
    string s;
    while(n>0){
        int m=n%2;
        s+=to_string(m);
        n/=2;
    }
    // cout<<s<<'\n';
    long long int ans=0,maxi=INT_MIN;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1') ans++;
        else{
            maxi=max(ans,maxi);
            ans=0;
        }
    }
    maxi=max(ans,maxi);
    return maxi;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout<<binary(n)<<'\n';

    return 0;
}