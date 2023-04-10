class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=s.size()-1; i>=0; i--){
            if(s[i]=='#'){
                ans+=(((s[--i]-'0')+(s[--i]-'0')*10)-1)+'a';
                //i++;
            }
            else{
                ans+=(s[i]-'0')-1+'a';
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};