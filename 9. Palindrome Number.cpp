class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long temp, rev = 0;
        int y = x;
        while (x > 0)
        {
            temp = x % 10;
            x = x / 10;
            rev = rev * 10 + temp;
        }
        if (y == rev)
            return true;
        else
            return false;
    }
};