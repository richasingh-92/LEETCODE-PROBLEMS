class Solution {
public:
    
    int orangesRotting(vector<vector<int>>& grid){
        int ans=0;

        queue<vector<int>> q;
        int m=grid.size(), n=grid[0].size();
        
        bool all0=true;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]!=0) all0=false;
                if(grid[i][j]==2){
                    q.push({i,j,0});
                    grid[i][j]=0;
                }
            }
        }
        if(all0) return 0;
        if(q.empty()) return -1;
     
        while(!q.empty()){
            auto v=q.front();
            int i=v[0], j=v[1];

            if(i+1<m && grid[i+1][j]==1){
                q.push({i+1,j,v[2]+1});
                grid[i+1][j]=0;
            }
            if(i-1>=0 && grid[i-1][j]==1){
                q.push({i-1,j,v[2]+1});
                grid[i-1][j]=0;
            }
            if(j+1<n && grid[i][j+1]==1){
                q.push({i,j+1,v[2]+1});
                grid[i][j+1]=0;
            }
            if(j-1>=0 && grid[i][j-1]==1){
                q.push({i,j-1,v[2]+1});
                grid[i][j-1]=0;
            }
            ans=max(ans,v[2]);
            q.pop(); 
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) return -1;
            }
        }
        return ans;
    }
};