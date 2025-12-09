#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int specialTriplets(vector<int>& nums) 
    {
        const int MOD = 1e9 + 7;
        int n = nums.size();
        
        int max_val = *max_element(nums.begin(), nums.end());
        int max_target = 2 * max_val;
        
        vector<int> left_count(max_target + 1, 0);
        vector<int> right_count(max_target + 1, 0);
        
        for (int num : nums) 
        {
            if (num <= max_target) 
            {
                right_count[num]++;
            }
        }
        
        long long total = 0;
        
        for (int j = 0; j < n; j++) 
        {
            if (nums[j] <= max_target) 
            {
                right_count[nums[j]]--;
            }
            
            int target = 2 * nums[j];
            if (target <= max_target) 
            {
                total = (total + (long long)left_count[target] * right_count[target]) % MOD;
            }
            
            if (nums[j] <= max_target) 
            {
                left_count[nums[j]]++;
            }
        }
        
        return total;
    }
};