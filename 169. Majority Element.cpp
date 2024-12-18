class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        // Moore's Voting Algorithm
        int cnt = 0;
        int el;
        for (int i = 0; i < nums.size(); i++)
        {
            if (cnt == 0)
            {
                cnt = 1;
                el = nums[i];
            }
            else if (el == nums[i])
            {
                cnt++;
            }
            else
                cnt--;
        }
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == el)
            {
                cnt1++;
            }
        }
        if (cnt1 > nums.size() / 2)
            return el;
        else
            return -1;
    }
};

/*
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > nums.size()/2)
                return it.first;
        }
        return -1;
    }
*/