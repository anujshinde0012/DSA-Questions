class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         unordered_map<int, int> numMap; // value -> index

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end()) {
            // Found the pair
            return {numMap[complement], i};
        }

        // Store current number with its index
        numMap[nums[i]] = i;
    }

    // Since the problem guarantees one solution, this won't be reached
    return {};
    }
};