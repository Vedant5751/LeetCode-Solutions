class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k%nums.size();
        k=nums.size()-k;
        int temp[k];
        for(int i=0; i<k; i++)
            temp[i] = nums[i];
        for(int i=k; i<nums.size(); i++){
            nums[i-k] = nums[i];
        }
        for(int i=nums.size()-k; i<nums.size(); i++){
             nums[i] = temp[i-(nums.size()-k)]; 
        }
    }
};