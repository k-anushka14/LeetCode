class Solution {
public:
    int maxArea(vector<int>& height) {
        int left =0;
        int right=height.size()-1;
        int maxWater=0;
        while(left<right){
            int width=right-left;
            int water=min(height[left], height[right])*width;
        if(height[left]<height[right]){
            left++;
        }
        else{
            right--;
        }
        
        maxWater=max(maxWater,water);
        }
        return maxWater;
    }
};