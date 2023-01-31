class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        for(int i=0;i<queries.size();i++){
            // if distance between two points is less thn or equal to radius then c++ and distnace is store in float remember
            //x^2+y^2=r^2
            int c=0;
            for(int j=0;j<points.size();j++){
                float distance=sqrt(pow(queries[i][0]-points[j][0],2)+pow(queries[i][1]-points[j][1],2));
                if(distance<=queries[i][2]) c++;
            }
            answer.push_back(c);
        }
        return answer;
    }
};