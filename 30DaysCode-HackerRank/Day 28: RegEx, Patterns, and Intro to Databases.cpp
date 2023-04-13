int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    vector<string> ans;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];
        string emailID = first_multiple_input[1];
        int index,flag=0,j=0;
        string check="gmail.com";
        for(int i=0;i<emailID.size();i++){
            if(emailID[i]=='@'){
                index=i;break;
            }
        }
        // cout<<index<<" ";
        for(int i=index+1;i<emailID.size();i++,j++){
            // cout<<"enter"<<" ";
            if(emailID[i]!=check[j]){
                flag=1;
                break;
            }
            // else{cout<<"sahi hai"<<" ";}
        }
        if(!flag) ans.push_back(firstName);
    }
    sort(ans.begin(),ans.end());
    for(auto it:ans) cout<<it<<'\n';

    return 0;
}
