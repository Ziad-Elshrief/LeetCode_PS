class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        /* prev -> true if the previous num is greater
         * next -> true if the next num is greater */
        bool prev=false , next=false;

        /* return index 0 if nums size is 1 or 1st element is greater */
        if(nums.size()==1 || nums[0] >nums[1]) return 0;
        /* loop to check numbers that has a step of 2 
        to decrease time complexity */
        for(int i=1;i<nums.size();i+=2){
            /* if current number is greater (prev ->false)
                else prev number is greater (prev -> true) */
            if(nums[i]>nums[i-1]){
                prev=false;
            }else{
                prev=true;
            }
            /*check if the current index is last index 
                then return the index - prev value 
                or check if the prev of the current number is greater
                and the next for the number from the last itteration 
                then the number that was skipped is the greater number */
            if(i==nums.size()-1 || (next && prev)){
                return i-prev;
            }
            /* if current number is greater (next ->false)
                else next number is greater (next -> true) */
            if(nums[i]>nums[i+1]){
                next=false;
            }else{
                next=true;
            }
            /* check if current number is greater than both neighbors */ 
            if( !next && !prev){
                return i;
            }
        }
        /* if the size is odd it leaves the last index which is the answer*/
        return nums.size()-1;
    }
};
