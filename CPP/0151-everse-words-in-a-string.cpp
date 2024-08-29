class Solution {
public:
    string reverseWords(string s) {
        bool begin=true;
        int index=0;
        string result;
        for(int i=s.size()-1;i>=0;i--){
            if(begin && s[i] != ' '){
                index=i;
                begin=false;
            }
            else if(!begin && s[i] == ' '){
                begin =true;
                for(int j=i+1;j<=index;j++){
                    result.push_back(s[j]);
                }
                 result.push_back(' ');
            }  
        }
        if(s[0] !=' '){
            for(int j=0;j<=index;j++){
                result.push_back(s[j]);
            }
        }
        else{
            result.pop_back();
        }
        return result;
    }
};
