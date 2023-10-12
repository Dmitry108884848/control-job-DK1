class Solution {
public:
   std::vector<int> twoSum(std::vector<int>& nums, int target) {
       
        std::map<int, int> numToIndex;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = numToIndex.find(complement);
            if (it != numToIndex.end()) {
                  return { it->second, i };
            }
            numToIndex[nums[i]] = i;
        }
        throw std::invalid_argument("No two sum solution");
   }
};
