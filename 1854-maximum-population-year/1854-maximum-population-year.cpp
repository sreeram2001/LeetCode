class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        
        map<int, int> lineSweep;
        for(auto& l:logs)
        {
            lineSweep[l[0]]++;
            lineSweep[l[1]]--;
        }

        int maxPopulation = 0, population = 0, year = 0;
        for(auto it:lineSweep)
        {
            population += it.second;

            if(population > maxPopulation)
            {
                maxPopulation = population;
                year = it.first;
            }
        }
        return year;
    }
};