class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>num_list;
        for(int i=0;i<=n;i++ ){
            bitset<17>num(i);
            num_list.emplace_back(num.count());
        }
        return num_list;
    }
};
