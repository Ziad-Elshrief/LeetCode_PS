class Solution {
public:
    void reverseString(vector<char>& s) {
        char temp;
        int last_index=s.size()-1;
        for(int i=0;i<s.size()/2;i++){
            temp=s[i];
            s[i]=s[last_index-i];
            s[last_index-i]=temp;
        }
    }
};
