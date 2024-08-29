class Solution {
public:
    char findTheDifference(string s, string t) {
      for(auto chr:t){
        if(s.find(chr)==std::string::npos){
            return chr;
        }
      }
      
    }
};
