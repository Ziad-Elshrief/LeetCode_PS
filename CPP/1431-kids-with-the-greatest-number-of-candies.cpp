class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=0;
        for(auto num:candies){
            if(num>max) max=num;
        }
        vector<bool>result(candies.size(),false);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=max) result[i]=true;
        }
        return result;
    }
};
