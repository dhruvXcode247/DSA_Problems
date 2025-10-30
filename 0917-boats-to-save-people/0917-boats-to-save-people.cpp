class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boats=0,n=people.size(),l=0,r=n-1;
        while (l<=r) {
            if (people[l]+people[r]<=limit) {
                l++;
            }
            boats++;
            r--;
        }
        return boats;
    }
};