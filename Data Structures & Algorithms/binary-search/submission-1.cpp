class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size() - 1;
        int l = 0;
        int r = n;
        int middle;

        while(l <= r){
            middle = (l + r)/2;
            if(nums[middle] > target){
                r = middle - 1;
            }
            else if(nums[middle] < target){
                l = middle + 1;
            }
            else {
                return middle;
            }
        }
        return -1;
    }
};
