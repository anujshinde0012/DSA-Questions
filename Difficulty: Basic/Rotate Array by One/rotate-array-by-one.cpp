// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) { 
        int s = arr.back();
        arr.pop_back();
        
        arr.insert(arr.begin(), s);

    }
};