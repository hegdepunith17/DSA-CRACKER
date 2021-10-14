class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int idx;
        
        for(int i=0;i<nums.size();i++)
        {
        idx=abs(nums[i])-1;
        nums[idx]*=-1;
        if(nums[idx]>0)
        {
            return abs(nums[i]);
        }
        
        
        
        
        
}
    
    return -1;
    
    }
};
