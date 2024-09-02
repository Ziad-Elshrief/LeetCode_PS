class Solution {
public:
    bool isIsomorphic(string s, string t) {
        /* map s[i] to t[i] */
        unordered_map<char,char>mapped;
        /* store already linked chars 
            that no two chars from s[i] has same mapped value*/
        unordered_set<char>linked;
        for(int i=0;i<s.size();i++){
            if(mapped[s[i]]==0){
                if(!(linked.insert(t[i])).second) return false;
                mapped[s[i]]=t[i]; 
            }else if(mapped[s[i]]==t[i]){
                
            }else{
                return false;
            }
        }
        return true;
    }
};
