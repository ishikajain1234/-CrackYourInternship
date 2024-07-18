class Solution {
public:
int solve(int a,string s,int b){
    if(s=="-"){
        return b-a;
    }
    if(s=="+")return a+b;
    if(s=="*")return a*b;
    else return b/a;
}
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<int>st;
        
        for(int i=0; i<n; i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*"|| tokens[i]=="/"){
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                int z=solve(x,tokens[i],y);
                st.push(z);

            }
            else{
                int p=stoi(tokens[i]);
                st.push(p);
            }
        }
        return st.top();
    }
};