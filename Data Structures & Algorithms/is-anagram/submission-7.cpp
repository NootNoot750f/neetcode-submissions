class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> tokensS;
        unordered_map<char, int> tokensT;
        for(char letter :  s){
            tokensS[letter]++;
        }
        for(char letter :  t){
            tokensT[letter]++;
        }
        return tokensT == tokensS;

    }
};
