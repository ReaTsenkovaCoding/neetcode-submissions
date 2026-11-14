class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;

        for(auto word:strs){
            string key = word;
            sort(key.begin(), key.end());
            groups[key].push_back(word);
        }
        vector<vector<string>> group_list;
        for(auto value:groups){
            group_list.push_back(value.second);
        }
        return group_list;
    }
};
