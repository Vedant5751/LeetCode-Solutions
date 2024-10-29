class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int longest =1;
        unordered_set<int> temp;
        for(int i=0; i<nums.size(); i++){
            temp.insert(nums[i]);
        }
        for(auto it: temp){
            if(temp.find(it - 1) == temp.end()){
                int cnt = 1;
                int x = it;
                while(temp.find(x+1) != temp.end()){
                    x = x+1;
                    cnt++;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;
    }
};