class Solution {
public:
    string reverseVowels(string s) {
        vector<int>index;
        string reversed(s);
        char temp;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                index.push_back(i);
            }
        }
        int index_end=index.size()-1;
        for(int j=0;j<index.size()/2;j++){
            temp=reversed[index[j]];
            reversed[index[j]]=reversed[index[index_end-j]];
            reversed[index[index_end-j]]=temp;
        }
        return reversed;

    }
    bool isVowel(char letter){
        if(letter=='a'|| letter=='e'||
            letter=='i'|| letter=='o'|| letter=='u' ||
            letter=='A'|| letter=='E'||
            letter=='I'|| letter=='O'|| letter=='U'){
                return true;
            }
        return false; 
    }
};
