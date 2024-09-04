class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int sum =0;
        for(auto num:nums){
            if(num <10) sum+= num;
            else sum-=num;
        }
        return sum;
    }
};
