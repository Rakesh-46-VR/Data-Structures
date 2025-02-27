#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        vector<int> maxFreq(26, 0); // To store the maximum frequency requirement for `words2`

        // Compute the maximum frequency requirement for `words2`
        for (string word : words2)
        {
            vector<int> freq(26, 0);
            for (char c : word)
            {
                freq[c - 'a']++;
                maxFreq[c - 'a'] = max(maxFreq[c - 'a'], freq[c - 'a']);
            }
        }

        vector<string> result;

        // Check each word in `words1` against `maxFreq`
        for (string word : words1)
        {
            vector<int> freq(26, 0);
            for (char c : word)
            {
                freq[c - 'a']++;
            }

            // Check if `word` satisfies `maxFreq`
            bool isUniversal = true;
            for (int i = 0; i < 26; ++i)
            {
                if (freq[i] < maxFreq[i])
                {
                    isUniversal = false;
                    break;
                }
            }

            if (isUniversal)
            {
                result.push_back(word);
            }
        }

        return result;
    }
};

int main()
{
    Solution s;
    vector<string> words1 = {"hello", "world", "hi"};
    vector<string> words2 = {"he", "el", "h"};
    vector<string> res = s.wordSubsets(words1, words2);
    for(string t : res){
        cout << t << endl;
    }
    return 0;
}