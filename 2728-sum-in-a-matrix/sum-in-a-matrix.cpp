class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            sort(nums[i].begin(),nums[i].end(),greater<int>());
        }
        
        for(int i=0;i<nums[0].size();i++){
          int maxnum=nums[0][i];
          for(int j=0;j<nums.size();j++){
             maxnum = max(maxnum,nums[j][i]);
          }
          cout << "Max:" << maxnum << endl;
          total+=maxnum;
          cout << "Total:" << total << endl;
        }
        return total;
    }
};