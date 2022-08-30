class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        unordered_map<int,int>mp;
        for(int i = nums2.size()-1;i >= 0; i--){
            while(s.size()>0){
                if(s.top() > nums2[i]){
                    mp[nums2[i]] = s.top();
                    s.push(nums2[i]);
                    break;
                }
                else{
                    s.pop();
                }
            }
            if(s.size()==0){mp[nums2[i]]=-1;
                           s.push(nums2[i]);}
        }
        vector<int>ans;
        for(auto x:nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};