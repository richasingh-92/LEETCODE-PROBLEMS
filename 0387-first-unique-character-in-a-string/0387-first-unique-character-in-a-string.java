class Solution {
    public int firstUniqChar(String s) {
        
        Map<Character, Integer> occurrences = new HashMap<>();
        for (char c : s.toCharArray()) {
            Integer count = occurrences.get(c);
            if (count == null) {
                occurrences.put(c, 1);
            } else {
                occurrences.put(c, ++count);
            }
        }
        for (int i = 0; i< s.length(); i++) {
            if (occurrences.get(s.charAt(i)) == 1) {
                return i;
            }
        }
        return -1;
    }
}
        
        
    