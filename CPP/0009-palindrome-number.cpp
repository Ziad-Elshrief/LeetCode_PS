class Solution {
public:
    bool isPalindrome(int x) {
        /*any negative number isn't palindrome */
        if(x<0) return false;
        /* the reversed number */
        int y=0;
        /* temp to operate on */
        int temp=x;
        /* the digit place for reversing */
        int base=1;
        while(temp){
            temp=temp/10;
            if(!temp) break;
            base*=10;
        }
        /* after getting the number of digits -> reasign temp to x */
        temp=x;
        /* predict overflow */
        if(base == 1000000000 ){
            if(x%10>2) return false;
        }
        while(temp){
            y+=(temp%10)*base;
            temp/=10; 
            base/=10;
        }
        return x==y;
    }
};
