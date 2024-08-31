class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> single;
        long long int answer=0;
        for(auto num:nums){
            if(single[num]==0){
                single[num]=1;
                answer += num; 
            }else{
                answer -= num;
            }
        }
        return (int)answer;
    }
};
