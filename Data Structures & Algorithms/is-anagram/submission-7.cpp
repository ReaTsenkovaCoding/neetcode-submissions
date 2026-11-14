class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        int chars_s[26] = {0};
        int chars_t[26] = {0};

        for (auto ch:s){
            chars_s[ch - 'a']++;
        }

        for(auto ch:t){
            chars_t[ch - 'a']++;
        }

        for(int i = 0; i < 26; i++){
            if(chars_s[i] != chars_t[i]){
                return false;
            }
        }
        return true;
    }
};
