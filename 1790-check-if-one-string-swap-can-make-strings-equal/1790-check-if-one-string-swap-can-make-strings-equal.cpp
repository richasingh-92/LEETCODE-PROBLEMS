class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length())
        {
            return false ;
        }

        int cnt = 0 ; 
        for (int i = 0 ; i < s1.length() ; i ++)
        {
            if (s1[i] != s2[i])
            {
                cnt ++ ;
            }
            else continue ; 
        }
        sort(s1.begin(), s1.end()) ; 
        sort(s2.begin(), s2.end()) ; 

        if (s1 != s2)
        {
            return false ; 
        }

        if (cnt == 2 || cnt == 0)
        {
            return true ; 
        }
        return false ; 
    }
};