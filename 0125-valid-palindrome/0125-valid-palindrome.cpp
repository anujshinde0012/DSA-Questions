class Solution {
    private: 
    bool valid(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        {
            return 1;
        }
        return 0;
    }

    char lowerCase(char ch)
    {
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool checkPalindrome(string b)
    {
        int s = 0;
        int e = b.length() - 1;

        while(s <= e)
        {
            if(b[s] != b[e])
            {
                return 0;
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }

public:
    bool isPalindrome(string s) 
    {
        string temp = "";

        for(int j = 0; j < s.length(); j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        for(int j = 0; j < temp.length(); j++)
        temp[j] = lowerCase(temp[j]);

        return checkPalindrome(temp);
    }
};