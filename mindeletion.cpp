class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        unordered_set<int>st;
        int ans=0;
        for(auto it :mp){
            if(st.find(it.second)!=st.end()){
                while(st.find(it.second)!=st.end()){
                    it.second--;
                    ans++;
                }
            }
            if(it.second!=0)st.insert(it.second);

        }
        return ans;
    }
};