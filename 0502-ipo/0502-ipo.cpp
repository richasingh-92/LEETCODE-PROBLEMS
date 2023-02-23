class Solution {
public:
  

    static bool comp(const pair<int,int>&a,const pair<int,int>&b){
        if(a.first == b.first)return a.second > b.second;
        return a.first < b.first;
    }

    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        priority_queue<int>pq;
        vector<pair<int,int>>arr;
        for(int i = 0;i < profits.size();i++){
            arr.push_back({capital[i],profits[i]});
        }
        sort(arr.begin(),arr.end(),comp);
        // for(auto it : arr){
        //     cout << it.first << " " << it.second << endl;
        // }
        int p1 = 0;
        while(k > 0){
            while(p1 < arr.size() && w >= arr[p1].first){
                pq.push(arr[p1].second);
                p1++;
            }
            if(pq.size() == 0){
                break;
            }
            w += pq.top();
            pq.pop();
            k--;
        }
        return w;
    }
};
        