class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                j++;
                swap(nums[i],nums[j]);
            }
        }
    }
};