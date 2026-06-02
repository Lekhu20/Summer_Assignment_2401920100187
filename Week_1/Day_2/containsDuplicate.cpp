class Solution {
public:
    bool containsDuplicate(vector<int>& nums) { // another solution you can use hashset  from det there is extra space complexity 
      sort(nums.begin(),nums.end());
      for(int i = 0; i < nums.size()-1; i++){
        if(nums[i]==nums[i+1])
        return true;
      } 
      return false ;
    }
};
