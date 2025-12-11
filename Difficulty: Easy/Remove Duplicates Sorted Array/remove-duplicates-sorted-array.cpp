class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        vector<int> ans;

        for(int x : arr){
            if(ans.empty() || ans.back() != x){
                ans.push_back(x);
            }
        }

        return ans;
    }
};