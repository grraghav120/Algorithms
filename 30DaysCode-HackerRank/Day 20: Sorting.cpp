 int swaps=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                swaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<swaps<<" swaps."<<'\n';
    cout<<"First Element: "<<a[0]<<'\n';
    cout<<"Last Element: "<<a[n-1]<<'\n';
