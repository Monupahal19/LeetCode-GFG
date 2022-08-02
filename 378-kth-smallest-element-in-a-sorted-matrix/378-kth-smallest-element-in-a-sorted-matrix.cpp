class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
       int n = matrix.size();
vector<int> vrr;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
vrr.push_back(matrix[i][j]);
}
}
sort(vrr.begin(),vrr.end());
return vrr[k-1];
    }
};