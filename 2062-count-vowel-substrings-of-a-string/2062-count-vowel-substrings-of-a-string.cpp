class Solution {
public:
    int countVowelSubstrings(string word) {
        int counter = 0;

        for(int i = 0; i < word.size(); i++)
        {
            if(word[i] != 'a' && word[i] != 'e' && word[i] != 'i' && word[i] != 'o' && word[i] != 'u')
            {
                continue;
            }

            unordered_set<char> vowels;
            
            for(int j = i; j < word.size(); j++)
            {
                if(word[j] != 'a' && word[j] != 'e' && word[j] != 'i' && word[j] != 'o' && word[j] != 'u')
                {
                    break;
                }

                vowels.insert(word[j]);

                if(vowels.size() == 5)  counter++;
            }
        }

        return counter;
    }
};