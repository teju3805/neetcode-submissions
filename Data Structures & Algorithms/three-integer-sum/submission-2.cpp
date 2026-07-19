class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            if(i>0){
                if(nums[i-1]==nums[i]) continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int target=nums[i]+nums[j]+nums[k];
                if(target==0) {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                }
                if(target>0){
                    k--;
                    while(nums[k]==nums[k+1] && k>j) k--;
                } 
                if(target<0){
                    j++;
                    while(nums[j-1]==nums[j] && j<n) j++;
                }
            }
        }
        return ans;   
    }
};
