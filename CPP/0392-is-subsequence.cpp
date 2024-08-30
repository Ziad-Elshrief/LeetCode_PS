class Solution {
public:
    bool isSubsequence(string s, string t) {
        bool found=false;
        int j=0;
        int first=0;
        bool next;
        if(s.empty()) return true;
        do{
        next=false;
        j=0;
        for(int i=first;i<t.size();i++){
            if(t[i]==s[j]){
                if(j==s.size()-1){
                    found=true;
                    break;
                }
                j++; 
            }
            if(t[i+1]==s[0]){
                first=i+1;
                next=true;
            } 
        }
        }while( !found && next);
        return found;
    }
};
