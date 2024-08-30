class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        /*successful pairs to return */
        vector<int>successful(spells.size(),0);
        /* counter for how many potions worked for spells[i] */
        int count;
        /* sort potions to search for only the first potion strong enough*/
        sort(potions.begin(),potions.end());
        /* the minumm potion strength to succeed */
        long long int min_potion;
        for(int i=0;i<spells.size();i++){
            count=0;
            /* if spells[i] >= success then all potions will work */
            if(spells[i] >= success){
                successful[i]=potions.size();
                continue;
            }
            /* if spell * maximum potion strength < success 
                then all potions won't work */
            if((long long)spells[i]*potions[potions.size()-1]< success){
                successful[i]=0;
                continue;
            }
            /* if spells is the same value as before -> copy */
            if(i>0 && spells[i]==spells[i-1] ){
                successful[i]=successful[i-1];
                continue;
            }
            min_potion=ceil((double)success/spells[i]);
            cout<<min_potion<<endl;
            /* determine which side is shorter to itterate on*/
            if(potions[potions.size()/2]> min_potion ){
                /* check how many potions
                if potions[j] >= success/spells[i] -> 
                        this and all remaning is successful */
            for(int j=0;j<potions.size();j++){
                if( potions[j]>=min_potion){
                    successful[i]=potions.size()-j;
                    break;
                } 
            }
            }else{ /* start from the end which is shorter */
                /* check how many potions
                if potions[j] >= success/spells[i] -> 
                        this and all remaning is successful */
            for(int j=potions.size()-1;j>=0;j--){
                if( potions[j]<min_potion){
                    successful[i]=potions.size()-j-1;
                    break;
                } 
            }
            /* if all of them are the same then they all worked */
            if(potions[0]==potions[potions.size()-1]) 
                    successful[i]=potions.size();
            }
            
        }
        return successful;
    }
};
