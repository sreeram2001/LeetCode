class Solution {
    public int characterReplacement(String s, int k) {
        Map<Character, Integer> mp = new HashMap<>();

        int start = 0;
        int freq = 0;
        int maxCount = 0;

        for(int end=0;end<s.length();end++)
        {
            char curr = s.charAt(end);

            mp.put(curr, 1+ mp.getOrDefault(curr, 0));

            freq = Math.max(freq, mp.get(curr));

            while ((end-start+1)-freq > k)
            {
                char startChar = s.charAt(start);

                mp.put(startChar, mp.get(startChar) - 1);
                start += 1;
            }

            maxCount = Math.max(maxCount, end-start+1);
        }

        return maxCount;
    }
}