class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>answer(2);
        unordered_map<int,int> unique;
        /* insert all the first array into the map 
            where key-> element , value-> 1 (unique to nums1)*/
        for(auto num:nums1){
            unique[num]=1;
        }
        /*check if a value from nums2 exists in nums1
          if it's not -> add it to map with value 0 */
        for(int i=0;i<nums2.size();i++){
                if(unique[nums2[i]] >0 ){
                    /* if value exists then it's not unique for nums1
                        change value from 1 to 2 */
                    unique[nums2[i]]=2;
                }  
        }
        /* itterate on map to get nums1 , nums2 unique values
            nums1 unique: indicated by value (it_> second) equals 1 
            nums2 unique: indicated by value (it_> second) equals 0 */
        for(unordered_map<int,int>::iterator it=unique.begin();it != unique.end();it++){
            if(it->second == 1)
            answer[0].push_back(it->first);
            else if(it->second == 0)
            answer[1].push_back(it->first);
        }
       return answer;
    }
};
