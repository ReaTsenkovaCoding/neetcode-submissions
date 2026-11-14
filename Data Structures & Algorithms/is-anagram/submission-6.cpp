class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> s_count;
        unordered_map<char, int> t_count;

        for(auto ch:s){
            s_count[ch]++;
        }

        for(auto ch:t){
            t_count[ch]++;
        }

        return s_count == t_count;
    }
};
