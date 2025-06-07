class Solution {
public:
    // dp[i][target] stores: can we reach 'target' using elements from index 0 to i
    vector<vector<int>> dp;

    bool canPartitionHelper(int index, int target, vector<int>& nums) {
        // If target is 0, we found a valid subset
        if (target == 0) return true;
        // If no elements left or target becomes negative
        if (index < 0 || target < 0) return false;

        // If already computed
        if (dp[index][target] != -1) return dp[index][target];

        // Do not include current element
        bool notPick = canPartitionHelper(index - 1, target, nums);

        // Include current element if possible
        bool pick = false;
        if (nums[index] <= target)
            pick = canPartitionHelper(index - 1, target - nums[index], nums);

        // Store and return result
        return dp[index][target] = pick || notPick;
    }

    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);

        // If total sum is odd, cannot partition into equal halves
        if (total % 2 != 0) return false;

        int target = total / 2;
        int n = nums.size();

        // Initialize memo table with -1
        dp = vector<vector<int>>(n, vector<int>(target + 1, -1));

        return canPartitionHelper(n - 1, target, nums);
    }
};
