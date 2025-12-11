class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
         int max1 = 0;
         int max2 = 0;
         
         int n = arr.size();
         
         for(int i = 0; i < n; i++)
         {
             if(max1 < arr[i])
             {
                 max1 = arr[i];
             }
         }
         for(int i = 0; i < n; i++)
         {
             if(max1 == arr[i]) continue;
             if(max2 < arr[i])
             {
                max2 = arr[i]; 
             }
         }
         return max2;
    }
};