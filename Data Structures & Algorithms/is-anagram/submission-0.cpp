class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> string1;
        unordered_map<char,int> string2;

        for(char letter : s){
            string1[letter]++;
        }

        for(char letter : t){
            string2[letter]++;
        }

        return string1 == string2;
        
    }
};
