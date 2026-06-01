
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp ;

        for(int i = 0; i < nums.size(); i++){
            int avl = target - nums[i];
            if(mp.find(avl) != mp.end()){
                return {mp[avl] ,i} ;
            }

            mp[nums[i]] = i;
            
        }
        return {};
    }
};
