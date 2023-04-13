class Solution {
    private:
        stack<char> st;
        queue<char> qu;
    public:
        void pushCharacter(char ch){
            st.push(ch);
        }
        void enqueueCharacter(char ch){
            qu.push(ch);
        }
        char popCharacter(){
            char ch=st.top();
            st.pop();
            return ch;
        }
        char dequeueCharacter(){
            char ch=qu.front();
            qu.pop();
            return ch;
        }
    //Write your code here

};
