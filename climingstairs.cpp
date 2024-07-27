class Solution {
public:
int call(int n,vector<int>&dp){
    if(n==0)return 1;
    if(n<0)return 0;
    if(dp[n]!=-1)return dp[n];
    int pick=call(n-1,dp);
    int notpick=call(n-2,dp);
    return dp[n]=pick+notpick;

}
    int climbStairs(int n) {
        int prev2=0;
         int prev=1;
         int curr=0;
        for(int i=1; i<=n; i++){
            int pick=prev;
            int notpick=0;
            if(i-2>=0) notpick+=prev2;
             curr=pick+notpick;
             prev2=prev;
             prev=curr;
             
        }
        return prev;
    }
};