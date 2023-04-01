class Solution {
public:
    int search(vector<int>& nums, int target) {
     auto idx = lower_bound(nums.begin() , nums.end() , target);
        if(idx!=nums.end() and *idx == target)
            return idx - nums.begin();
        return -1;
    }
};
