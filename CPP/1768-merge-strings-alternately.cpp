class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged(word1.size()+word2.size(),' ');
        int i=0,j=0,k=0;
        while(k<word1.size()+word2.size()){
            if(i < word1.size()){
                merged[k++]=(word1[i++]);
            }   
            if(j < word2.size()){
                merged[k++]=word2[j++];
            }
        }
        return merged;
    }
};
