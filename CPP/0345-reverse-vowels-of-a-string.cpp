class Solution {
public:
    string reverseVowels(string s) {
        string reversed(s.size(),' ');
        int index=0;
        stack<char>vowels;
        for(auto chr:s){
            if(isVowel(chr)){
                vowels.push(chr);
            }
        }
        for(auto chr:s){
            if(isVowel(chr)){
                reversed[index++]=vowels.top();
                vowels.pop();
            }else{
                reversed[index++]=chr;
            }
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
