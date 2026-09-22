class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int profit=0;
        int buy=nums[0];
        int maxprofit=0;
        for(int i=1;i<nums.size();i++){
            buy=min(nums[i],buy);
            profit = nums[i] - buy;
            maxprofit = max ( profit ,maxprofit); 
        }

        return maxprofit;
    }
};