class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        stack<int>st;
        st.push(n-1);
        vector<int>v(n,0);
     
        
        for(int i =n-2; i>=0; i--){
            
                int x=st.top();
                
               while(st.size()>0 && temp[i]>=temp[st.top()]){
               
                st.pop();
               }
                if(st.size()>0){
                    v[i]=st.top()-i;
                }
                
              st.push(i);

        
        }
        return v;
    }
};