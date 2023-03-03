class Solution {
public:
    int strStr(string h, string n) {
        int i=0,ans=0;
        while(i<h.length()){
            if(h[i]==n[0]){
                ans=i;
                i++;
                int j=1;
                 while(j<n.length()){
                     if(n[j]!=h[i]){
                         break;
                     }else{
                         i++;j++;
                     }
                 }
                 if(j==n.length()){
                     return ans;
                 }
                 j=1;i=ans;
            }
            i++;
        }
        return -1;
    }
};
        
    