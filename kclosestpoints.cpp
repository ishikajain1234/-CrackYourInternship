#define pp pair<int,vector<int>>

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pp,vector<pp>,greater<pp>>pq;
        for(auto it :points){
            int x=it[0];
            int y=it[1];
            int t=x*x+y*y;
            pq.push({t,{x,y}});
        }
        vector<vector<int>>ans;
        while(k-- && pq.size()>0){
             ans.push_back(pq.top().second);
             pq.pop();
        }
        return ans;
    }
};