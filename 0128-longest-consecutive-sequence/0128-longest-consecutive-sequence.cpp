class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxi=0,n=nums.size(),count=0;
        unordered_map<int,int>freq;
        for (int i=0;i<n;i++) {
            freq[nums[i]]++;
        }
        for (auto it:freq) {
            int num=it.first;
            if (!freq.count(num-1)) {
                count=1;
                while (freq.count(num+1)) {
                    num++;
                    count++;
                }
                maxi=max(maxi,count);
            }
        }
        return maxi;
    }
};