class Solution {
public:
    string losingPlayer(int x, int y) {
        int n= y/4 > x/1 ? x/1:y/4;
        if(n%2) return "Alice";
        return "Bob"; 
    }
};
