class Solution {
public:
    int romanToInt(string s) {
        short int num=0;
        bool skip=false;
        for(int i=0;i<s.size();i++){
            if(skip){
                skip=false;
                continue;
            } 
            if(s[i]=='I'){
                if(s[i+1]=='V'){
                    num+=4;
                    skip=true;
                } else if( s[i+1]=='X'){
                    num+=9;
                    skip=true;
                }else{
                    num+=1;
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'){
                    num+=40;
                    skip=true;
                } else if( s[i+1]=='C'){
                    num+=90;
                    skip=true;
                }else{
                    num+=10;
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'){
                    num+=400;
                    skip=true;
                } else if( s[i+1]=='M'){
                    num+=900;
                    skip=true;
                }else{
                    num+=100;
                }
            }
            else if(s[i]=='V'){
                num+=5;
            }
            else if(s[i]=='L'){
                num+=50;
            }
            else if(s[i]=='D'){
                num+=500;
            }else{
                num+=1000;
            }
        }
        return num;
    }
};
