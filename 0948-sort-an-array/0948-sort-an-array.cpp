class Solution {
public:
    void merge(vector<int>&nums,int beg,int mid,int end) {
        int n1 = mid - beg + 1;
        int n2 = end - mid;
        vector<int> leftArr(n1);
        vector<int> rightArr(n2);
        for (int i = 0; i < n1; i++){
           leftArr[i] = nums[beg + i];
        }
        for (int j = 0; j < n2; j++){
            rightArr[j] = nums[mid + 1 + j];
        }
        int i = 0;
        int j = 0;
        int k = beg;

        while (i < n1 && j < n2) {
            if (leftArr[i] <= rightArr[j]) {
                nums[k] = leftArr[i];
                i++;
            }
            else {
            nums[k] = rightArr[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            nums[k] = leftArr[i];
            i++;
            k++;
        }
        while (j < n2) {
            nums[k] = rightArr[j];
            j++;
            k++;
        }
    }
    void mergeSort(vector<int>&nums,int beg,int end) {
        if (beg < end) {
            int mid = beg + (end - beg) / 2;
            mergeSort(nums, beg, mid);
            mergeSort(nums, mid + 1, end);
            merge(nums, beg, mid, end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};