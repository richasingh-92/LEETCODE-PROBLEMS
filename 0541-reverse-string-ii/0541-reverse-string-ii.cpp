class Solution {

public:
    string reverseStr(string s, int k) {
        
        int n=s.length();
        for( int i=0 ; i<n ; i+=2*k ){
            
            string str = s.substr(i,k);
            reverse(str.begin(),str.end());
            s.replace(i,k,str);
        }
        return s;
    }
};
        
    