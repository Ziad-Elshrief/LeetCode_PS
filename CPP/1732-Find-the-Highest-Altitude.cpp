class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int sum=0;
        for(auto alt:gain){
            sum+=alt;
            if(sum>max)max=sum;
        }
        return max;
    }
};
