class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq=0,n=nums.size(),max_count,frequency[101]={0};
        for (int i=0;i<n;i++) {
            frequency[nums[i]]++;
        }
       for (int i=0;i<101;i++) {
        max_count=max(max_count,frequency[i]);
       }
        for (int i=0;i<101;i++) {
            if (frequency[i]==max_count) freq+=frequency[i];
        }
        return freq;
    }
};