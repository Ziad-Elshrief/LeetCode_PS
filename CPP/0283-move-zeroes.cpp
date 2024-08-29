class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp;
        int last_index=nums.size()-1;
        for(int i=0;i<=last_index;i++){
            for(int j=0;j<last_index;j++){
                if(nums[j]==0 ){
                    temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
            }
            }
            if(nums[0] !=0 && nums[last_index]==0)
                last_index--;
        }
    }
};
