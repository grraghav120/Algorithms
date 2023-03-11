class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string,vector<string>> mp;
        int n=strs.size();
        string a;
        for(int i=0;i<n;i++){
            a=strs[i];
            sort(a.begin(),a.end());
            mp[a].push_back(strs[i]);
        }
        for(auto it:mp) ans.push_back(it.second);
        return ans;
    }
};


// Given an array of strings strs, group the anagrams together. You can return the answer in any order.

// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

// Example 1:

// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
