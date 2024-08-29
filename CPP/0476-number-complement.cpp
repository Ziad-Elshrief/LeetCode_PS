class Solution {
public:
    int findComplement(int num) {
        bitset<31>n(num);
        int size=log2(num);
        for(int i=0;i<=size;i++){
            n.flip(i);
        }
        return n.to_ulong();
    }
};
