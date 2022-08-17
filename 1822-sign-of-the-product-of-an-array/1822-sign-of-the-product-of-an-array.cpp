class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long  p=1;
        int c1=0,c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) return 0;
            else if(nums[i]<0) c1++;
            else c2++;
        }
        if(c1%2==1){
            return -1;
        }
        else{
            return 1;
        }
    }
};