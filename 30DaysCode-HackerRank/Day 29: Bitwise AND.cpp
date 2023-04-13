int bitwiseAnd(int n, int k) {
    // int ans;
    priority_queue<int> v;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if((i&j)<k) v.push(i&j);
        }
    }
    // sort(v.begin(),v.end(),greater<int>());
    return v.top();
}
