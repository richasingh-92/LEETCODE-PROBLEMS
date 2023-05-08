class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        for(int i=0;i<mat.size();i++){
            sum += mat[i][i];
        }
        int i=0;
        int j=mat[0].size()-1;
        int cnt=j;
        while(cnt>=0){
            if(i==j){
                cnt--;
                i++;j--;
                continue;
            }else{
                sum+=mat[i][j];
                i++;
                j--;
                cnt--;
            }
        }
        return sum;
    }
};