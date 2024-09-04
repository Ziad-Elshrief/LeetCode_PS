class Solution {
public:
    double myPow(double x, int n) {
        double num=1;
        if(x==1) return x;
        else if(x==-1){
            if(n%2) return x;
            return -x;
        }
        if(n==-2147483648) return 0;
        if(n<0){
            x=1/x;
            n=-n;
        }
        for(int i=0;i<n;i++){
            num*=x;
            if(num==0) break;
        }
        return num;
    }
};
