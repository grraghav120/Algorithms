class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int ans=0,i=0,j=0,n=fruits.size();
        map<int,int> mp;
        while(j<n){
            mp[fruits[j]]++;
            while(mp.size()==3){
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            ans=max(ans,(j-i+1));
            j++;
        }
        return ans;
    }
};
