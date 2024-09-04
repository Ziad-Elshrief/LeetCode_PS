class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int base=1;
        int minDig=0;
        for(int i=0;i<4;i++){
            minDig+=(min(num1%10,num2%10,num3%10)*base);
            base*=10;
            num1/=10;
            num2/=10;
            num3/=10;
        }
        return minDig;
    }
    char min(char dig1 , char dig2 , char dig3){
        if(dig1<=dig2 && dig1<=dig3) return dig1;
        else if(dig2<=dig1 && dig2<=dig3) return dig2;
        return dig3;
    }
};
