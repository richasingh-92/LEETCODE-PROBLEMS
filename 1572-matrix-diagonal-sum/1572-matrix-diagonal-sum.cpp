class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int i=0,j=0,sum=0;
        int k=0,l=mat.size()-1;
        while(i<mat.size()){
            sum += mat[i++][j++];
            if(k!=l)
                sum += mat[k][l];
            k++;
            l--;
        }
        return sum;
    }
};