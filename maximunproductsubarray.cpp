class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int a=1;
        int b=1;
        int maxi=INT_MIN;
        for(int i=0; i<n; i++){
            
           if(a==0)a=1;
            a=a*nums[i];
           
            maxi=max(maxi,a);
            
           
        }
        for(int j=n-1; j>=0; j--){
                 if(b==0)b=1;
                  b=b*nums[j];
                   maxi=max(maxi,b);
        }
         return maxi;
    }
};