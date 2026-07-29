class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //Create Anagram Map
        unordered_map<string, vector<string>> anagramMap;
        //For each word
        for(auto word : strs){
            //Make a copy
            string a = word;
            string sortedWord = a;
            //Copy the word into the anagram map
            sort(sortedWord.begin(), sortedWord.end());
            anagramMap[sortedWord].push_back(word);
        }
        //Make the answer vector of vectors
        vector<vector<string>> answers;

        //Push the anagrams into the vectors
        for(auto word : anagramMap){
            answers.push_back(word.second);
        }

        return answers;
    }
};
