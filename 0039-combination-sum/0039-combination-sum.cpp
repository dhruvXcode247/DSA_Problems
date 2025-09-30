class Solution {
public:
    void answerList(int index,vector<int>&candidates,vector<vector<int>>&answer,vector<int>&temp,int target){
        if (index==candidates.size()) {
            if (target==0) answer.push_back(temp);
            return;
        }
        if (candidates[index]<=target) {
            temp.push_back(candidates[index]);
            answerList(index,candidates,answer,temp,target-candidates[index]);
            temp.pop_back();
        }
        answerList(index+1,candidates,answer,temp,target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<int>temp;
        vector<vector<int>>answer;
        answerList(0,candidates,answer,temp,target);
        return answer;
    }
};