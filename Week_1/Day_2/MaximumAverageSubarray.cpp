class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
     int n = nums.size();

    long long Sum = 0;

    for(int i = 0; i < k; i++) {
        Sum += nums[i];
    }

    long long maxSum = Sum;

    for(int i = k; i < n; i++) {
        Sum += nums[i];
        Sum -= nums[i - k];

        maxSum = max(maxSum, Sum);
    }

    return (double)maxSum / k;
    }
};
