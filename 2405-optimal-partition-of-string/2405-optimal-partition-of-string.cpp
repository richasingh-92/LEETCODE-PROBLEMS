class Solution {
public:
     int partitionString(string s) {
        int idx = 0;
        int count = 0;
        unordered_map<char, bool> mp; // unordered_map to keep track of characters in current substring
        while (idx < s.length()) {
            if (mp.find(s[idx]) != mp.end()) { 
                count++; // increment count
                mp.clear(); // clear unordered_map to start a new substring
            }
            mp[s[idx]] = true; // mark current character as seen
            idx++; // move to next character
        }
        return count + 1; // return number of substrings (add 1 because we need to count the last substring as well)
    }
};