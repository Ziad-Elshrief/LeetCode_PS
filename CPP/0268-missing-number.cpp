class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int sum=0 ,original_sum=0;
        for(int i=0;i<nums.size();i++){
            /*as there's no need to add 0 itself 
              adding numbers in range [1,n]*/
            original_sum=original_sum+i+1;
            /* adding array elements*/
            sum+=nums[i];
        }
        /*return original_sum - sum -> missing number 
            if they are the same then missing num -> 0 */
        return original_sum-sum;
    }
};
