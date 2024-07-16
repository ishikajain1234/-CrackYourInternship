#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    //leetcode solution start
    
    class Solution {
    public:
    string intToRoman(int num) {
        vector<string>s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        vector<int>v={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string s1="";
        while(num>0 ){
            for(int i=0; i<v.size(); i++){
                if(num>=v[i]){

                    s1+=s[i];
                    num-=v[i];
                    break;
                }
            }
        }
        return s1;
    }
};
 //leetcode solution end

}