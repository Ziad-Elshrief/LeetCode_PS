class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int counter =0;
        if(flowerbed.size()<3){
                if(flowerbed[0]==0 && flowerbed[flowerbed.size()-1]==0)
                return n<=1;
        }else{
        if(flowerbed[0]==0 && flowerbed[1]==0){
            counter++;
            flowerbed[0]=1;
        }
        for(int i=1;i<flowerbed.size()-1;i++){
            if(counter>=n) break;
            if(flowerbed[i] ==0 && flowerbed[i-1] ==0 && flowerbed[i+1] ==0 ){
                flowerbed[i]=1;
                counter++;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0 ){
            flowerbed[flowerbed.size()-1]=1;
            counter++;
        }
        }
        if(counter>=n) return true;
        return false;
    }
};
