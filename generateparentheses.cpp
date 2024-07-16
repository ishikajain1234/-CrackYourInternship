#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // leetcode solution start

    class Solution
    {
    public:
        bool isvalid(string s)
        {
            stack<int> st;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                {
                    st.push(s[i]);
                }
                else
                {
                    if (st.size() == 0)
                        return false;
                    st.pop();
                }
            }
            if (st.size() > 0)
                return false;
            return true;
        }
        void call(int n, vector<string> &v, string s)
        {
            if (s.size() == 2 * n)
            {
                if (isvalid(s))
                {
                    v.push_back(s);
                }
                return;
            }
            s.push_back('(');
            call(n, v, s);
            s.pop_back();
            s.push_back(')');
            call(n, v, s);
            s.pop_back();
        }
        vector<string> generateParenthesis(int n)
        {
            vector<string> v;
            string s = "";
            call(n, v, s);
            return v;
        }
    };

    // leetcode solution end
}