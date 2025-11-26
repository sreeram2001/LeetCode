class Solution {
public:
    int smallestRepunitDivByK(int k) {
        set<int> visited;
        int n = 1;
        int counter = 1;

        while(n%k != 0)
        {
            if(visited.contains(n)) return -1;

            visited.insert(n);
            n = (n*10+1)%k;
            counter += 1;
        }

        return counter;
    }
};