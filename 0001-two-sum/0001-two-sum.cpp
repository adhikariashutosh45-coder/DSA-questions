class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> arr;

        // Store value + original index
        for(int i = 0; i < nums.size(); i++) {
            arr.push_back({nums[i], i});
        }

        // Sort by value
        sort(arr.begin(), arr.end());

        int i = 0;
        int j = arr.size() - 1;

        while(i < j) {

            if(arr[i].first + arr[j].first == target) {
                return {arr[i].second, arr[j].second};
            }
            else if(arr[i].first + arr[j].first > target) {
                j--;
            }
            else {
                i++;
            }
        }

        return {};
    }
};