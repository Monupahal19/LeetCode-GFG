class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=0;i<nums.size();i++){
           if(nums[j-1]!=nums[i])
               nums[j++]=nums[i];
        }
        return j;
    }
    
};