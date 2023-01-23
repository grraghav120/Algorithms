class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) return 1;
        else if(trust.size()==0) return -1;
        vector<int> graph[n+1];
        int index=-1;
        for(int i=0;i<trust.size();i++){
            graph[trust[i][0]].push_back(trust[i][1]);
        }
        for(int i=1;i<=n;i++){
            if(graph[i].size()==0){
                index=i;
                break;
            }
        }
        if(index==-1) return -1;
        for(int i=1;i<=n;i++){
            if(i==index) continue;
            auto itr=find(graph[i].begin(),graph[i].end(),index);
            if(itr==graph[i].end()) return -1;
        }
        return index;
    }
};