class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         std::map<int , int >resMap; 
         vector<int> res;
         //for (int i=0; i<nums.size();i++){
         //    resMap.insert(pair<int,int>(nums[i],i));
         //}
        
         for(int i=0; i<nums.size();i++){
             int complement = target - nums[i];
             map<int ,int >::iterator l_it; 
             l_it=resMap.find(complement);
             
             
             if(l_it != resMap.end() && l_it->second != i){  
                 res.push_back(i);
                 res.push_back(l_it->second);
                 return res;
             }
             
             resMap.insert(pair<int,int>(nums[i],i));
         }
        
        return res;
        
        
    }
};
