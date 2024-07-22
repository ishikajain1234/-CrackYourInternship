class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
        }
        string q = "";
        priority_queue<pair<int, char>> pq;
        for (auto it : mp) {
            pq.push({it.second, it.first});
        }
        while (pq.size() > 0) {
            if (pq.size() == 1) {
                if (pq.top().first > 1)
                    return "";
                else {
                    char c = pq.top().second;
                    q += c;
                    return q;
                }
            }
            auto t = pq.top();
            pq.pop();
            char a = t.second;
            q += a;
            int b = t.first;
            b = b - 1;
            auto r = pq.top();
            pq.pop();
            char i = r.second;
            q += i;
            int v = r.first;
            v = v - 1;
            if (v > 0) {
                pq.push({v, i});
            }
            if (b > 0) {
                pq.push({b, a});
            }
        }
        return q;
    }
};