class MapSum {
public:
    map<string,int> mp;
    MapSum() {
        // map<string,int> mp;
    }
    
    void insert(string key, int val) {
        mp[key]=val;
    }
    
    int sum(string prefix) {
        int sum=0,j=0;
        for(auto it:mp){
            string f=it.first;
            if(prefix.size()>f.size()) continue;
            for(j=0;j<prefix.size();j++){
                if(prefix[j]!=f[j]) break;
            }
            if(j==prefix.size()) sum+=it.second;
        }
        return sum;
    }
};
