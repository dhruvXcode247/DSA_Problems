class Solution {
public:
    int candy(vector<int>& ratings) {
        int i=1,n=ratings.size(),candies=1;
        while (i<n) {
            if (ratings[i]==ratings[i-1]) {
                candies++,i++;
                continue;
            }
            int peak=1;
            while (i<n && ratings[i]>ratings[i-1]) {
                peak++,candies+=peak,i++;
            }
            int down=1;
            while (i<n && ratings[i]<ratings[i-1]) {
                candies+=down,i++,down++;
            }
            if (down>peak) candies+=(down-peak);
        }
        return candies;
    }
};