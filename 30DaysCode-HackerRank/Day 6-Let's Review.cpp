int main() {
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        string eve="",odd="";
        for(int i=0;i<s.size();i++){
            if(i&1) odd+=s[i];
            else eve+=s[i];
        }
        cout<<eve<<' '<<odd<<'\n';
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
