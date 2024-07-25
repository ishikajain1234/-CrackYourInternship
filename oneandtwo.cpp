class Solution {
public:
int call(vector<string>& strs, int m, int n,int i, vector<vector<vector<int>>>&dp){
    if(i==strs.size())return 0;
    if(dp[m][n][i]!=-1)return dp[m][n][i];
    int countz=count(strs[i].begin(),strs[i].end(),'0');
    int count1=strs[i].size()-countz;
    if(m-countz>=0 && n-count1>=0)
    return dp[m][n][i]=max(1+call(strs,m-countz,n-count1,i+1,dp),call(strs,m,n,i+1,dp));
    else return dp[m][n][i]=call(strs,m,n,i+1,dp);
}
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<vector<int>>>dp(m+1,vector<vector<int>>(n+1,vector<int>(strs.size(),-1)));
        return call(strs,m,n,0,dp);
    }
};