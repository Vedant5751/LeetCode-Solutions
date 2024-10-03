class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            if (isalnum(s[left]))
            {
                if (isalnum(s[right]))
                {
                    if (tolower(s[left]) != tolower(s[right]))
                    {
                        return false;
                    }
                    left++;
                    right--;
                }
                else
                    right--;
            }
            else
                left++;
        }
        return true;
    }
};
