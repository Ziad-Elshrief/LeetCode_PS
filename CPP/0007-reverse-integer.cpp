class Solution {
public:
    int reverse(int x) {
        int y=0;
        int temp=x/10;
        int base=1;
        /*get how many digits */
        while(temp ){
            temp/=10;
            base*=10;
        }
        /* overflow */
        if(base==1000000000){
            if(x>1463847412 && x<2000000000 )
                return 0;
            else if(x<-1463847412 && x> -2000000000)
                return 0;
            else if(abs(x%10)>2)
                return 0;
        }
        
        temp=x;
        /* reverse number */
        while(temp){
            y+=((temp%10)*base);
            temp/=10;
            base/=10;
        }

        return y;
    }
};
