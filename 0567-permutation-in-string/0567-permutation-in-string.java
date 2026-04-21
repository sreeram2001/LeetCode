class Solution {
    public boolean checkInclusion(String s1, String s2) {
        
        if(s1.length() > s2.length()) return false;

        //fill up s1
        HashMap<Character, Integer> freq1 = new HashMap<>();

        for(char c : s1.toCharArray())
        {
            freq1.put(c, freq1.getOrDefault( c, 0 ) + 1);
        }

        //filling up s2 until window
        HashMap<Character, Integer> freq2 = new HashMap<>();
        int winSize = s1.length();

        for(int i=0;i<winSize;i++)
        {
            freq2.put(s2.charAt(i), freq2.getOrDefault(s2.charAt(i), 0) + 1);
        }

        if(freq1.equals(freq2)) return true;

        //check windowing
        for(int i=winSize;i<s2.length();i++)
        {
            
            freq2.put(s2.charAt(i - winSize), freq2.get(s2.charAt(i - winSize)) - 1 );
            
            if(freq2.get(s2.charAt(i - winSize)) == 0)
            {
                freq2.remove(s2.charAt(i - winSize));
            }

            freq2.put(s2.charAt(i), freq2.getOrDefault(s2.charAt(i) , 0) + 1);

            if(freq1.equals(freq2)) return true;               
        }

        return false;
    }
}