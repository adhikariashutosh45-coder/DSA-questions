class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool dup=false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                dup=true;
                break;

            }
        }
        return dup;
    }
};