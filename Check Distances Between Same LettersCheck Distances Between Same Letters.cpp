class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<pair<char,int>> visited;
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            int temp = ch - 97;
            int pos = distance[temp];
            bool found = false;
            for (auto &p : visited) {
                if (p.first == ch) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                if (i + pos + 1 >= s.length()) {
                    return false;
                } else {
                    if (s[i] != s[i + pos + 1]) {
                        return false;
                    } else {
                        visited.push_back({s[i], 1});
                    }
                }
            } else {
                continue;
            }
        }
        return true;
    }
};
