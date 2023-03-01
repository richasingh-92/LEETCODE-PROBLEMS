class Solution {

public:
    bool checkInclusion(string s1, string s2) {
        
        
        if (s1.length() > s2.length()) return false;

         
        unordered_map<char, int> charCounts;
        for (char c : s1) charCounts[c]++;

        
        int left = 0, right = 0;
        
        int count = s1.length();

        while (right < s2.length()) {
            
            if (charCounts[s2[right++]]-- >= 1) count--;

            
            if (count == 0) return true;

            if (right - left == s1.length() && charCounts[s2[left++]]++ >= 0) count++;
        }

        
        return false;
    }
};
        
    