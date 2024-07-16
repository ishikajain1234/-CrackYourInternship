#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>v;
        unordered_map<string,vector<string>>mp;
        int n=strs.size();
        for(int i=0; i<n; i++){
            string x=strs[i];
            sort(x.begin(),x.end());
           mp[x].push_back(strs[i]);
        }
        vector<vector<string>>c;
        for(auto it :mp){
            vector<string>v=it.second;
            c.push_back(v);
        }
        return c;
    }
};
}