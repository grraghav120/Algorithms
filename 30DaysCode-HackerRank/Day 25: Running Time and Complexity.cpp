int t;cin>>t;
    while(t--){
        long long int n,flag=0;cin>>n;
        if(n<=1) flag=1;
        for(long long int i=2;i*i<=n;i++){
            if(n%i==0){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"Not prime"<<'\n';
        else cout<<"Prime"<<'\n';
    }
