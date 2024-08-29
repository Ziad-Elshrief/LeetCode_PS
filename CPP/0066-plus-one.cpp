class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result(digits.size()+1,0);
        result[result.size()-1]=1;
         for(int i=digits.size()-1;i>=0;i--){
            result[i+1]=result[i+1]+digits[i];
            if(result[i+1] > 9){
                result[i+1]=0;
                result[i]+=1;
        }
        }
       if(result[0]==0) result.erase(result.begin());
        return result;
    }
};
