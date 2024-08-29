class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1-i;j++){
                if(nums[j]==0 ){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
            }
            }
        }
    }
};
