class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>sub;
        int i;
        /* use target - nums[i] as key
            and index+1 as value */
        for(i=0;i<nums.size();i++){
            sub[target-nums[i]]=i+1;
        }
        for(i=0;i<nums.size();i++){
            /* check that it exists in the map 
            and if so it's not the current element */
            if(sub[nums[i]] !=0 && i != sub[nums[i]]-1 ){
                return vector<int> {i,sub[nums[i]]-1};
            }
        }
        return vector<int> {-1,-1};
    }
};
