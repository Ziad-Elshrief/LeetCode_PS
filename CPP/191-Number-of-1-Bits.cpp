class Solution {
public:
    int hammingWeight(int n) {
        std::bitset<31> num (n);
        return num.count();
    }
};
