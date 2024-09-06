class Solution {
public:
    bool checkRecord(string s) {
        char L_count =0;
        char A_count =0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L'){
                 L_count++;
            }
            else if(s[i]=='A') {
                A_count++;
                L_count=0;
            }
            else if(s[i]=='P') {
                L_count=0;
            }
            if(L_count==3){
                return false;
            }
            if(A_count==2){
                return false;
            }
        }
        return true;
    }
};
