class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        return !( (coordinate1[0]%2 == coordinate2[0]%2) ^ 
                    (coordinate1[1]%2 == coordinate2[1]%2) );
    }
};
