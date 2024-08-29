class Solution {
public:
    string removeStars(string s) {
        stack<char> word;
        for(auto chr:s){
            if(chr == '*'){
                word.pop();
            }else{
                word.push(chr);
            }
        }
        string result(word.size(),' ');
        for(int i=result.size()-1;i>=0;i--){
            result[i]=word.top();
            word.pop();
        }
        return result;
    }
};
