class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        char last=nums.size()-1;
        char k=0;
        char i=0;
        while(i<nums.size() && nums[i] != '_'){
            if(nums[i]==val){
                nums[i]=nums[last];
                nums[last]='_';
                last--;
            }else{
                k++;
                i++;
            }

        }
        return k;
    }
};
