class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzeroes = 0;

        for(int j = 0; j < nums.size(); j++)
        {
            if(nums[j] != nums[nonzeroes])
            {
                swap(nums[j], nums[nonzeroes]);
                nonzeroes++;
            }
        }
    }
};