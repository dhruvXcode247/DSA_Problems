class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int count=0,sum=0,capSum=0;
        sort(capacity.begin(),capacity.end(),greater<int>());
        for (int i=0;i<apple.size();i++) {
            sum+=apple[i];
        }
        for (int i=0;i<capacity.size();i++) {
            capSum+=capacity[i];
            count++;
            if (capSum>=sum) return count;
        }
        return count;
    }
};