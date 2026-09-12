class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int buy=nums[0];
        int profit=0;
        int maxprofit=0;
        for(int i=0;i<nums.size();i++){
            buy=min(buy,nums[i]);
            profit=nums[i]-buy;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};