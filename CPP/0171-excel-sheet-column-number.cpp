class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num=0;
        char base='A'-1;
        long long int pos=1;
        for(int i=columnTitle.size()-1;i>=0;i--){
            num= num+ (pos*(columnTitle[i]-base));
            pos*=26;
        }
        return num;
    }
};
