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
                long long target=nums[i];
                target+=nums[j];
                target+=nums[k];
                if(target==0) {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<n && nums[j-1]==nums[j]) j++;
                    while(k>j && nums[k]==nums[k+1]) k--;
                }
                if(target>0){
                    k--;
                    while(k>j && nums[k]==nums[k+1]) k--;            
                } 
                if(target<0){
                    j++;
                    while(j<n && nums[j-1]==nums[j]) j++;
                }
            }
        }
        return ans;   
    }
};
