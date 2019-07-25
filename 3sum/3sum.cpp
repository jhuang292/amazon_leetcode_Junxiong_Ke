#include<algorithm>
#pragma GCC optimise ("Ofast")
static auto x = []() {ios_base::sync_with_stdio(false); cin.tie(NULL); return NULL;}();


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());       
        int sum = 0;
        int n = nums.size();
        vector<vector<int>> res;        
        for(int i=0; i< n - 2; i++){
            if(i>0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1;
            int r = n - 1;
            
            while(l < r){
                sum = nums[l] + nums[r] + nums[i];
                if(sum == 0)
                {
                   res.push_back({nums[i], nums[l], nums[r]});
                   l++;
                   r--;
                    while(l < r && nums[l] == nums[l - 1]) l += 1;
                    while(l < r && nums[r] == nums[r + 1]) r -= 1;
                   
                    
                }
                else if (sum < 0){
                    l += 1;
                }
                else{
                    r -= 1;
                }
            }
        }
        
        
        return res;
    }
};
