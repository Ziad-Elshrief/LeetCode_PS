class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum;
        int i=0;
        int max;
        do{
            sum=0;
            /* If the end of the current window is smaller than 
            than the start of the previous then the average will be 
            smaller so no need to calculate it */
            if(i ==0 || nums[i+k-1]>nums[i-1]){
             for(int j=i;j<i+k;j++){
                sum=sum+nums[j];
            }
            if(i==0 || sum>max)  max=sum;
            }
            i++;
        }while(i<=nums.size()-k);
        return (double)max/k;
    }
};
