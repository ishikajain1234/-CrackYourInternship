#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // leetcode start
    class Solution
    {
    public:
        string simplifyPath(string s)
        {
            stack<string> st;
            int i = 0;
            int n = s.size();
            while (i < n)
            {
                string t = "";
                if (s[i] == '/')
                {
                    i++;
                    continue;
                }
                while (i < n && s[i] != '/')
                {
                    t += s[i];
                    i++;
                }
                if (t == ".")
                {
                    i++;
                    continue;
                }
                else if (t == "..")
                {
                    if (st.size() > 0)
                        st.pop();
                }
                else if (t != "")
                {
                    st.push(t);
                }
            }
            string res = "";
            while (st.size() > 0)
            {
                res = '/' + st.top() + res;
                st.pop();
            }
            if (res == "")
                return "/";
            return res;
        }
    };
    // leetcode end
}