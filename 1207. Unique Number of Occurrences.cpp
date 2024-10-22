class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> mpp;
        for(int i=0; i<arr.size(); i++){
            mpp[arr[i]]++;
        }
        set<int> stt;
        for(auto it: mpp){
            stt.insert(it.second);
        }
        if(stt.size()== mpp.size()){
            return true;
        }
        else
            return false;
    }
};