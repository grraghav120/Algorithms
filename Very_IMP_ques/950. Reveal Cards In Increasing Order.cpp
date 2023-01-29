class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size(),i;
        sort(deck.begin(),deck.end());
        queue<int> q;
        for(i=0;i<n;i++) q.push(i);
        vector<int> res(n);
        for(i=0;i<n;i++){
            res[q.front()]=deck[i];
            q.pop();
            q.push(q.front());
            q.pop();
        }
        return res;
    }
};
