class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int i=0, j=0;
        while(j!=nums.size()){
            int prev=nums[i];
            int current=nums[j];
            if (prev!=current){
                nums[i+1]=nums[j];
                i++;
                count++;
            }
            j++;
        }
        return count;
    }
};