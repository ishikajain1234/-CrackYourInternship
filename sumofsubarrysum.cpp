class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        const  int mod=1e9 + 7;
        vector<int>left(n,-1);
        vector<int>right(n,n);
        stack<int>st;
    
        st.push(0);
        for(int i=1; i<n; i++){
            while(st.size()>0 && arr[st.top()]>=arr[i]){
                st.pop();
            }
            if(st.size()!=0){
                left[i]=st.top();
            }
            st.push(i);

        }
        while(!st.empty()){
            st.pop();
        }
        st.push(n-1);
         for(int i=n-2; i>=0; i--){
            while(st.size()>0 && arr[st.top()]>arr[i]){
                st.pop();
            }
            if(st.size()!=0){
                right[i]=st.top();
            }
            st.push(i);

        }
        long long  sum=0;
       
        for(int i=0; i<n; i++){
            int a=i-left[i];
            int b=right[i]-i;
            sum=(sum+(a*b)*(long long)arr[i])%mod;
        }
        return sum%mod;
        
    }
};