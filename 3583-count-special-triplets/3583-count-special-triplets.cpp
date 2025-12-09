class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        unordered_map<int, int> rightCount;
        unordered_map<int, int> leftCount;

        for (int x : nums) {
            rightCount[x]++;
        }

        long long ans = 0;

        for (int j = 0; j < nums.size(); j++) {

            rightCount[nums[j]]--;

            int target = nums[j] * 2;

            long long before = leftCount[target];

            long long after = rightCount[target];

            ans += before * after;

            leftCount[nums[j]]++;
        }

        return ans;
    }
};
