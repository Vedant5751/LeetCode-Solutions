class Solution
{
public:
    int findNonMinOrMax(vector<int> &nums)
    {
        if (nums.size() < 3)
            return -1;
        set<int> st;
        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        set<int>::iterator it = st.begin();
        it++;
        return *it;
    }
};