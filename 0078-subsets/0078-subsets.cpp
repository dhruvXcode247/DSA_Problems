class Solution {
public:
    vector<vector<int>> subset;   // To store all subsets
    
    void backtrack(vector<int>& nums, int index, vector<int>& current) {
        // Base case: If we reached the end of nums, add the current subset to the result
        if (index == nums.size()) {
            subset.push_back(current);
            return;
        }
        
        // Exclude nums[index]
        backtrack(nums, index + 1, current);
        
        // Include nums[index]
        current.push_back(nums[index]);
        backtrack(nums, index + 1, current);
        
        // Backtrack: Remove the last element before returning to previous call
        current.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;  // Temporary vector to store the current subset
        backtrack(nums, 0, current);
        return subset;
    }
};
