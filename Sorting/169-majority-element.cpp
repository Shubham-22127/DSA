class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mpp;
        int occurance = n/2;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second > occurance){
                return it.first;
            }
        }
        return 0;
    }
};