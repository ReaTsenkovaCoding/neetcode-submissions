class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> seen;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            int searched = target - nums[i];
            if(seen.count(searched)){
                return {seen[searched], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};
