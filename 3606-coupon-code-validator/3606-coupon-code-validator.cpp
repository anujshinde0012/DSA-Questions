class Solution {
public:
    vector<string> validateCoupons(vector<string>& code,
                                   vector<string>& businessLine,
                                   vector<bool>& isActive) {

        unordered_map<string, vector<string>> mp;
        vector<string> order = {"electronics", "grocery", "pharmacy", "restaurant"};

        auto validCode = [&](const string& s) {
            if (s.empty()) return false;
            for (char c : s) {
                if (!(isalnum(c) || c == '_')) return false;
            }
            return true;
        };

        for (int i = 0; i < code.size(); i++) {
            if (!isActive[i]) continue;
            if (!validCode(code[i])) continue;

            bool ok = false;
            for (auto &b : order) {
                if (businessLine[i] == b) {
                    ok = true;
                    break;
                }
            }
            if (!ok) continue;

            mp[businessLine[i]].push_back(code[i]);
        }

        vector<string> ans;
        for (auto &b : order) {
            sort(mp[b].begin(), mp[b].end());
            for (auto &c : mp[b]) ans.push_back(c);
        }

        return ans;
    }
};
