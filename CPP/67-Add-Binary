class Solution {
public:
    string addBinary(string a, string b) {
        int size=a.size()>b.size()?a.size():b.size();
        a.insert(0,size-a.size(),'0');
        b.insert(0,size-b.size(),'0');
        char carry='0';
        string Result(size,'0');
        for(int i=size-1;i>=0;i--){
            if(a[i] =='1' && b[i]=='1'){
                    Result[i]=carry;
                    carry='1';
            }
            else if(a[i] =='1' && b[i]=='0'){
                if(carry == '1'){
                    Result[i]='0';
                    carry='1';
                }else{
                    Result[i]='1';
                    carry='0';
                }
            }
            else if(a[i] =='0' && b[i]=='1'){
                if(carry == '1'){
                    Result[i]='0';
                    carry='1';
                }else{
                    Result[i]='1';
                    carry='0';
                }
            }
            else if(a[i] =='0' && b[i]=='0'){
                Result[i]=carry;
                carry='0';
            }
        }
        if(carry=='1'){
            Result.insert(0,1,'1');
        }
        return Result;
    }
};
