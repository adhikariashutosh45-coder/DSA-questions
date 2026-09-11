class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> arr(nums.size());
        for(int i=0;i<nums.size();i++){
            
            int leftsum =0;
            int rightsum=0;

            for(int k=0; k<i;k++){
                leftsum=leftsum+nums[k];
            }

            for(int j=i+1;j<nums.size();j++){
                rightsum=rightsum+nums[j];
            }

            arr[i]=leftsum-rightsum;
            if(arr[i]<0){
                arr[i]=arr[i]*(-1);
            }
            

        }
        return arr;
    }
};