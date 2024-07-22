class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& ap) {
        unordered_map<int,vector<int>>mp;
        unordered_map<int,int>indegree;
        for(int i=0; i<ap.size(); i++){
            int x=ap[i][0];
            int y=ap[i][1];
            mp[x].push_back(y);
            mp[y].push_back(x);
            indegree[x]++;
            indegree[y]++;
        }
        // vector<int>vis(n,-1);
        int first=0;
        for(auto it:indegree){
            if(it.second==1){
                first=it.first;
                break;
            }
        }
        vector<int>ans;
        int i=0;
        int curr=first;
        int prev=INT_MIN;
        while(ans.size()<ap.size()+1){
            ans.push_back(curr);
            for(auto it :mp[curr]){
                if(it!=prev){
                    prev=curr;
                    curr=it;
                    break;
                }
            }
            
        }
        return ans;

    }
};