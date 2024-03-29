class Solution {
public:
    int jump(vector<int>& nums) {.

        int n = nums.size();
        if (n < 2) return 0;
        int curMax = 0, nextMax = 0, jumps = 0;
        for (int i = 0; i < n - 1; i++) {
            nextMax = max(nextMax, i + nums[i]);
            if (i == curMax){
                jumps++;
                curMax = nextMax;
                if (curMax >= n - 1) 
                    break;
            }
        }
        return jumps;
    }
};
