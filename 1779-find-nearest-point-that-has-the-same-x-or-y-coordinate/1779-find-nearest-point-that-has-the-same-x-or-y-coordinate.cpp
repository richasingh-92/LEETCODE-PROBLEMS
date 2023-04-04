class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans=-1;
        int dis;
        int min_dis=INT_MAX;
        for(int i=0;i<points.size();i++)
        {
            if(points[i][0]==x or points[i][1]==y)
            {
                dis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(dis<min_dis)
                {
                    min_dis=dis;
                    ans=i;
                }
            }
        }
        return ans;
    }
};