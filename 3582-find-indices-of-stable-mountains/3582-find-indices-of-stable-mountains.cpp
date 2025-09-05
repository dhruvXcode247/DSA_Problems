class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int>temp;
        for (int i=1;i<height.size();i++) {
            if (height[i-1]>threshold) temp.emplace_back(i);
        }
        return temp;
    }
};