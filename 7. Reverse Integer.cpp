class Solution
{
public:
    int reverse(int x)
    {
        long long temp, rev = 0;
        while (abs(x) > 0)
        {
            temp = x % 10;
            x = x / 10;
            rev = rev * 10 + temp;
        }
        if (rev < pow(-2, 31) || rev > pow(2, 31) - 1)
            return 0;
        else
        {
            return rev;
        }
    }
};
