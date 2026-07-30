class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString;
        for(string word : strs){
            encodedString += to_string(word.length());
            encodedString += '#';
            encodedString += word;
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        vector<string> decodedWord;
        string sizeOfWord;
        int i = 0;
        string len = "";
        while(i < s.size()){
            while(s[i] != '#'){
                len += s[i];
                i++;
            }
            int length = stoi(len);
            i++;
            decodedWord.push_back(s.substr(i, length));
            i += length;
            len = "";
        }

        return decodedWord;
    }
};
