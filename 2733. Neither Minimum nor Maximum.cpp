class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        if(nums.size()<3) return -1;
        set<int> st;
        st.insert(nums[0]);
        st.insert(nums[1]);
        st.insert(nums[2]);
        set<int>::iterator it = st.begin();
        it++;
        return *it;        
    }
};