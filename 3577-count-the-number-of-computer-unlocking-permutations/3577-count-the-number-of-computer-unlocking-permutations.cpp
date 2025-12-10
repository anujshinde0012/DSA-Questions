class Solution {
public:
    int countPermutations(vector<int>& a) {
        const long long MOD = 1e9+7;
        int n = a.size();

        for (int i = 1; i < n; i++) {
            bool ok = false;
            for (int j = 0; j < i; j++)
                if (a[j] < a[i]) ok = true;
            if (!ok) return 0;
        }

        long long ans = 1;
        for (int i = 2; i < n; i++) ans = ans * i % MOD;
        return ans;
    }
};
