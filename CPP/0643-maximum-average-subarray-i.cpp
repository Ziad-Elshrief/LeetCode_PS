class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int max;
        int sum=0;
        /*Calculate first window sum and set it as the max value */
        for(int idx=0;idx<k;idx++){
            sum+=nums[idx];
            max=sum;
        }
        /* remove the first element from prev window
        and add the last of the new window to the sum
        and compare it to the maximum */
        for(int i=0;i<nums.size()-k;i++){
            sum=sum-nums[i]+nums[k+i];
            if(sum>max) max=sum;
        }
        return (double)max/k; 
    }
};
