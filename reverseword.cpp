#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while( i<n && s[i]==' '){
            i++;
        }
        while( j>=0 && s[j]==' '){
            j--;
        }
        vector<string>v;
        string t="";
        for(int k=i; k<=j; k++){
           if(s[k]==' ' && t!=""){
              v.push_back(t);
              t="";
           }
           else{
            if(s[k]!=' ')
            t+=s[k];

           }

        }
        if(t!="")v.push_back(t);
        reverse(v.begin(),v.end());
        string p="";
        for(int i=0; i<v.size(); i++){
            p=p+" "+v[i];
        }
        
        return p.substr(1);

    }
};
}