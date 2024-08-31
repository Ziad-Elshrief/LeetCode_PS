class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int right_sum=0;
        int left_sum=0;
        /* get the sum of all numbers after index 0 */
        for(int i=1;i<nums.size();i++){
            right_sum += nums[i];
        }
        /* check if sums are equal then it's index 0*/
        if(right_sum==left_sum) return 0;

        for(int i=1;i<nums.size();i++){
            /* similar to sliding window -> remove element ,add new element*/
            left_sum+= nums[i-1];
            right_sum-= nums[i];
            if(right_sum==left_sum) return i;
        }
        /* none was found */
        return -1;
    }
};
