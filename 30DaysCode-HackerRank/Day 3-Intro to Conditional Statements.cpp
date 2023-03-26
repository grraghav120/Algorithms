int main()
{
    string N_temp;
    getline(cin, N_temp);

    int n = stoi(ltrim(rtrim(N_temp)));
    if(n&1) cout<<"Weird"<<'\n';
    else{
        if(n>=2 && n<=5) cout<<"Not Weird"<<'\n';
        else if(n>=6 && n<=20) cout<<"Weird"<<'\n';
        else cout<<"Not Weird"<<'\n';
    }
    return 0;
}