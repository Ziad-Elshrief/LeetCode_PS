class Solution {
public:
    int lengthOfLastWord(string s) {
        int length;
        int last;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] != ' '){
                last=i;
                break;
            }
        }
        for(int j=last;j>=0;j--){
            if(s[j]==' '){
                length=last-j;
                break;
            }
            length=last-j+1;
        }
        return length;
    }
};
