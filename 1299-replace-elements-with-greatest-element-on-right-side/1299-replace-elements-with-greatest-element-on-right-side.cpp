class Solution {
public:
    vector<int> replaceElements(vector<int>& nums) {
        int maxnum = -1;
        for(int i=nums.size()-1;i>=0;i--) {
            
           int  currentnum=nums[i];
            nums[i]=maxnum;
            maxnum=max(currentnum,maxnum);
            
            
        }  
        return nums;
    }
};