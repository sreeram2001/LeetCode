class Solution {
    public int evalRPN(String[] tokens) {
        
        Stack<Integer> st = new Stack<>();

        for(int i=0;i<tokens.length;i++)
        {
            if( !st.empty() && tokens[i].equals("/") )
            {
                int n2 = st.peek();
                st.pop();
                int n1 = st.peek();
                st.pop();
                st.push(n1/n2);
            }
            else if( !st.empty() && tokens[i].equals("+") )
            {
                int n2 = st.peek();
                st.pop();
                int n1 = st.peek();
                st.pop();
                st.push(n1+n2);
            }
            else if( !st.empty() && tokens[i].equals("*") )
            {
                int n2 = st.peek();
                st.pop();
                int n1 = st.peek();
                st.pop();
                st.push(n1*n2);
            }
            else if( !st.empty() && tokens[i].equals("-") )
            {
                int n2 = st.peek();
                st.pop();
                int n1 = st.peek();
                st.pop();
                st.push(n1-n2);
            }
            else
            {
                st.push( Integer.parseInt(tokens[i]) );
            }
        }

        return st.peek(); 
    }
}