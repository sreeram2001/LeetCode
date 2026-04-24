class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        
        int countL = 0;
        int countR = 0;
        int countUnd = 0;

        for(int i=0;i<moves.length();i++)
        {
            if(moves.charAt(i) == 'L')
            {
              countL += 1;  
            }
            else if(moves.charAt(i) == 'R')
            {
              countR += 1;  
            }
            else
            {
                countUnd += 1;
            }
        }

        return Math.abs(countR-countL)+countUnd;
    }
}