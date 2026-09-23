class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxwater=0;
        while(i<j){
            int length=j-i;
            int heights=min(height[i],height[j]);
            int water=heights*length;
            if(height[i]<height[j]){
                i++;
            }
            else{
                j--;
            }
            maxwater=max(maxwater,water);
        }
        return maxwater;
    }

};