class Solution {
public:
    double average(vector<int>& salary) {
        int max=0;
        int min=INT_MAX;
        double average=0;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>= max)
            {
                max=salary[i];      
            }
            if (salary[i]<=min)
            {
                min=salary[i];
            }
            average=average+salary[i];
        }
        
        average=average-(max+min);
        return average/(salary.size()-2);
    }
};
/*
class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size();
        double ans=0;
        sort(salary.begin(),salary.end());
        for(int i=1;i<n-1;i++){
            ans+=salary[i];
        }
        return ans/(n-2);
    }
};*/