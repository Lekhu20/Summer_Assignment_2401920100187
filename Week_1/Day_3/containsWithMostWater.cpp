class Solution {
public:
    int maxArea(vector<int>& height) {
     int maxWater = 0;
     int left = 0 , right = height.size()-1;
     while(left <= right){
        int breadth = right - left;

        int ht = min(height[left] , height[right]);
        int presentWater = breadth * ht ;

        maxWater = max(maxWater, presentWater);
        height[left] < height[right] ? left++ : right -- ;
     }
     return maxWater ;
    }
};
