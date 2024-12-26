class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long reverse=0;
        int original =x;
        while (x!=0){
            int num = x %10; // last digit of the number!
            reverse = reverse*10 + num;
            x=x/10;
        }
        return reverse==original;
    }
};