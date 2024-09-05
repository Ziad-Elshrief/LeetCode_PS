class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamming=0;
        while(x || y){
            hamming+=((x&1) ^(y&1));
            x=x>>1;
            y=y>>1;
        }
        return hamming;
    }
};
