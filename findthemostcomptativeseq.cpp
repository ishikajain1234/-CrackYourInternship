class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        int n=nums.size();
        stack<int>st;
        int t=n-k;
        for(int i=0; i<n; i++){
            if(st.size()==0 || st.top()<=nums[i]){
                st.push(nums[i]);
            }
            else{
                while(st.size()>0 && st.top()>nums[i]&& t>0 ){
                    st.pop();
                    t--;
                }
                st.push(nums[i]);
            }
        }
        while(t>0){
            st.pop();
            t--;
        }
        vector<int>ans;
        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};