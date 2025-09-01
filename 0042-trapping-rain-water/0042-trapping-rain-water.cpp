class Solution {
public:
    int trap(vector<int>& height) {
        int count=0,leftmax=0,rightmax=0,left=0,right=height.size()-1;
        while(left<=right) {
            if (height[left]<=height[right]) {
                if (leftmax>height[left]) count+=leftmax-height[left];
                else leftmax=height[left];
                left+=1;
            }
            else {
                if (rightmax>height[right]) count+=rightmax-height[right];
                else rightmax=height[right];
                right-=1;
            }
        }
        return count;
    }
};