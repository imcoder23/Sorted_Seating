// Given an array of integers, return indices of the two numbers such that they add up to a specific target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> indices;
        int complement;
        for(int i = 0; i<=nums.size(); i++){
            complement = target - nums[i];
            std:vector<int>::iterator it = std::find(nums.begin(),nums.end(),complement);
            if(it != nums.end()){
                int index=std::distance(nums.begin(),it);
                if(index != i){
                    indices.push_back(i);
                    indices.push_back(index);
                    break;    
                }
                }
            
        }
        return indices;
        
    }
    
};