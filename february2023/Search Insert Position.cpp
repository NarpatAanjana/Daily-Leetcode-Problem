class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
              
        int s = nums.size();
 
        for(int i=0;i<s;i++){
            
            
            if(nums[i] == target)
                
                return i;
                
            else if(target<nums[i])
                
                return i;
               
        }

        return s;
    }
};
