class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int slow=0;
        int fast=1;
        for(int fast=1;fast<nums.size();fast++)
        if(nums[fast]!=nums[slow]){
            nums[slow+1]=nums[fast];
            slow++;
        }
        return slow+1;
    }
};