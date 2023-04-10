class Solution {
public:
    unordered_map<char,int>mp;
    bool check(string &a,string& b){
        int aa=a.size(),bb=b.size();
        int n=min(aa,bb);
        for(int i=0;i<n;i++){
            if(mp[a[i]]>mp[b[i]])return false;
            if(mp[a[i]]<mp[b[i]])return true;
        }
        if(aa>bb)return false;
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        for(int i=0;i<order.size();i++) mp[order[i]]=i;
        for(int i=1;i<words.size();i++){
            bool ch=check(words[i-1],words[i]);
            if(ch==false) return false;
        }
        return true;
        
    }
};