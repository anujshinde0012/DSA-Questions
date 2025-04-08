class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int num : arr) freq[num]++;
        
        unordered_set<int> seen;
        for (auto& [_, count] : freq)
            if (!seen.insert(count).second) return false;
        
        return true;
    }
};