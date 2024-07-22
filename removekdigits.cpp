class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        int i=0;
        if(n==k)return "0";
        string s="";
        while(k>0 &&  i<n){
            while(s.size()>0 && s.back()>num[i] && k>0){
                k--;
                s.pop_back();
            }
            s.push_back(num[i]);
            i++;
        }
         for(int j=i; j<n; j++){
            s+=num[j];
        }
        while(k>0){
            s.pop_back();
            k--;
        }
       
        
        string t="";
        int q=0;
        int x=s.size();
        for(int i=0; i<n && x>1; i++){
            if(s[i]=='0'){
                q++;
                x--;
            }
            else{
                break;
            }
        }
        for(int j=q; j<s.size(); j++){
            t.push_back(s[j]);
        }
        return t;

    }
};