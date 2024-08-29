class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        bool result=true;
        for(auto chr:s){
            if(chr>='A' && chr<='Z'){
                chr=chr-'A'+'a';
                ans.append(1,chr);
            }else if(chr>='0' && chr<='9'){
                ans.append(1,chr);
            }else if(chr>='a' && chr<='z'){
                ans.append(1,chr);
            }
        }
        for(int i=0;i<ans.size();i++){
            if(ans[i] != ans[ans.size()-i-1]){
                result=false;
                break;
            }
        }
        return result;
    }
};
