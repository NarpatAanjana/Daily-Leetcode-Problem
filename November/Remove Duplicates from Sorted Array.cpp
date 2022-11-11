class Solution {
public:

void swap( int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;        
}
int removeDuplicates(vector<int>& nums) {
    if(nums.size()==1)return 1;
    int p=0;
    for(int i=1;i<nums.size();i++){
        if(nums[p]!=nums[i]){
            ++p;
            swap(nums[p],nums[i]);
            
        }
    }
    return p+1;
}
};
