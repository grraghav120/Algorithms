class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') ||(s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')) ans+=s[i];
            else{
                if(ans=="") continue;
                else st.push(ans);
                ans="";
            }
        }
        if(ans!="") st.push(ans);
        ans="";
        while(st.size()!=1){
            ans+=st.top();
            ans+=" ";
            st.pop();
        }
        ans+=st.top();
        return ans;
    }
};
