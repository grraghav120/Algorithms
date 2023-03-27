int sum=0,ans=INT_MIN;
    for(int i=0,j=0;i<6 && j<6;i++){
        for(int j=0;j<6;j++){
            if(i<6 && (i+1)<6 && (i+2)<6 && j<6 && (j+1)<6 && (j+2)<6){
                sum=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+
                arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
            }
            // cout<<sum<<'\n';
            ans=max(sum,ans);
        }
        // ans=max(sum,ans);
    }
    cout<<ans<<'\n';
    return 0;