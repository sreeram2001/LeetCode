class Solution {
    public boolean isAnagram(String s, String t) {
        
        if(s.length() != t.length())
        {
            return false;
        }

        HashMap<Character, Integer> freq = new HashMap<>();

        for(char ss : s.toCharArray())
        {
            freq.put( ss, freq.getOrDefault(ss, 0) + 1);
        }

        for(char tt:t.toCharArray())
        {
            if(!freq.containsKey(tt) || freq.get(tt) == 0)
            {
                return false;
            }

            freq.put( tt, freq.getOrDefault(tt, 0) - 1);
        }

        return true;
    }
}