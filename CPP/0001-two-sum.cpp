class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Result{-1,-1};
        int min=nums[0];
        int max=nums[0];
        int i;
        /* get max and min values from the input nums*/
        for(i=0;i<nums.size();i++){
            if(nums[i]>max) max=nums[i];
            else if(nums[i]<min) min=nums[i];
        }
        /* calculate Target-nums[i] and if the result is in range of
        max and min value then it may be the answer so we search for it*/
         for(i=0;i<nums.size();i++){
            if(target-nums[i]<=max && target-nums[i]>= min){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j]==target){
                    Result[0]=i;
                    Result[1]=j;
                   return Result;
                }
                }
            }
         }
        return Result;
    }
};
