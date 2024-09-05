class Solution {
public:
    int addDigits(int num) {
        char digit=0;
        while(num){
            digit+=num%10;
            num/=10;
        } 
        digit= (digit%10)+(digit/10);
        return (digit%10)+(digit/10);
    }
};
