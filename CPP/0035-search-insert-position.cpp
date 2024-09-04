class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index=nums.size();
        for(int i=1;i<nums.size();i+=2){
            if(nums[i]==target){
                index=i;
                break;
            }
            else if(nums[i]>target && nums[i-1]< target){
                index=i;
                break;
            }
            else if(target<=nums[i-1]){
                index=i-1;
                break;
            }
        }
        if(index==nums.size()){
            return nums.size() -(target<=nums[nums.size()-1]);
        }
        return index;
    }
};
