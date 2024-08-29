class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string result;
        char temp;
        int counter=0;
        for(int i=s.size()-1;i>=0;i--){
            if(counter==k){
                counter=0;
                result.push_back('-');
            }
            if(s[i]>='a'&&s[i]<='z'){
                result.push_back(s[i]-'a'+'A');
                counter++;
            }
            else if(s[i] == '-'){
            
            }
            else{
                result.push_back(s[i]);
                counter++;
            }
        }
        if(!result.empty() && result[result.size()-1]=='-'){
            result.pop_back();
        }
        int end=result.size()-1;
        for(int i=0;i<result.size()/2;i++){
            temp=result[i];
            result[i]=result[end-i];
            result[end-i]=temp;
        }
        return result;
    }
};
