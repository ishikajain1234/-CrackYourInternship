class Solution {
public:
string call(int n){
    string t="";
    while(n>1){
       t+=to_string(n%2);
       n=n/2;
    }
    t+='1';
    return t;
}
    vector<int> countBits(int n) {
        
        vector<int>v;
        v.push_back(0);
        for(int i=1; i<=n; i++){
            string x=call(i);
            int count1=count(x.begin(),x.end(),'1');
            v.push_back(count1);
        }
        return v;
    }
};