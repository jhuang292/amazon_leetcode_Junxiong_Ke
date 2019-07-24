class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int sum = 0;
        vector<int> res;
        if (nums.size() < 2 ){
            return res;
        }
        
        for(int i=0;i<nums.size()-1;i++){
            for (int j=i+1;j<nums.size();j++){
                if(target == nums[i] + nums[j]) {
                res.push_back(i);
                res.push_back(j);
                //return res;
            }
                
           }
        }
        
        return res;
    }
};
