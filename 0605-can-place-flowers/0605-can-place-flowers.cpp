class Solution {
public:
    bool canPlaceFlowers(vector<int>& flower, int n) {
        if(flower.size() == 1){
            if(flower[0]==0){
                n--;
            }
            if(n<=0){
                return true;
            }else{
                return false;
            }
        }
        for(int i=0;i<flower.size();i++){
            if(n==0){
                return true;
            }
            if(i==0){
                if(flower[i] == 0 && flower[i+1]==0){
                    flower[i]=1;
                    n--;
                    continue;
                }
            }else if(i==flower.size()-1){
                if(flower[i] == 0 && flower[i-1]==0){
                    n--;
                }
            }else if(flower[i] == 0){
                if(flower[i-1]==0 && flower[i+1]==0){
                    flower[i]=1;
                    n--;
                }
            }
        }
        if(n==0){
            return true;
        }else{
            return false;
        }
    }
};