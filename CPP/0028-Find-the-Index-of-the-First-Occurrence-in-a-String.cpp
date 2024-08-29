class Solution {
public:
    int strStr(string haystack, string needle) {
        int index=-1;
        for(int i=0;i<haystack.size();i++){
            if(index != -1) break;
            if(haystack[i]==needle[0]){
                for(int j=0;j<needle.size();j++){
                    if(haystack[i+j]!=needle[j]){
                        index=-1;
                        break;
                    }
                    index=i;
                }
            }
        }
        return index;
    }
};
