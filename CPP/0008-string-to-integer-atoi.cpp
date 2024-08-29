class Solution {
public:
    int myAtoi(string s) {
        string num;
        bool captured=false;
        bool  neg;
        long long int base=1;
        long long int result=0;

        /* getting a clean number from string s*/
        for(int i=0;i<s.size();i++ ){
            if(captured){
                if((s[i]>='0'&& s[i]<='9')){
                num.push_back(s[i]);
                }
                else{
                    break;
                }
            }
            else{
                if(s[i]>'0'&& s[i]<='9'){
                num.push_back(s[i]);
                captured=true;
                }
		        else if(s[i]=='0'){
                    if(s[i+1] != '0'){
                    num.push_back(s[i]);
                    captured=true;
                    }
		        }
                else if(s[i] == '-' || s[i]== '+'){
                    if(s[i]=='-')neg=true;
                    else neg=false;

                    if(s[i+1]>'0'&& s[i+1]<='9'){
                        captured=true; 
                    }
                    else if(s[i+1]=='0'){

                    }
                    else{
                        break;
                    }
                }
                else if(s[i]==' '){

                }
                else{
                break;
                }
            }
        }

        /** Getting Number and handling overflow **/
        for(int i=num.size()-1;i>=0;i--){
            result=result+ ((num[i]-'0')*base);
            if(base==10000000000 || result > 2147483647){
                    if(neg) result=-2147483648;
                    else result=2147483647;
                break;
            }
            base*=10;   
        }

        /** If the number isn't overflowed or 0 fix its sign 
            and cast it to int */
        if(result && neg){
            result=-result;
        }
        return (int)result;      
    }
};
