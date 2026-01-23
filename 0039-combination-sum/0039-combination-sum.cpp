class Solution {
public:
    void answerList(int index,vector<int>&candidates,vector<vector<int>>&answer,vector<int>&temp,int target){
        if(target==0) {
            answer.emplace_back(temp);
            return;
        }
        for (int i=index;i<candidates.size();i++) {
            if (target<0) break;
            temp.emplace_back(candidates[i]);
            answerList(i,candidates,answer,temp,target-candidates[i]);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int n=candidates.size();
        vector<int>temp;
        vector<vector<int>>answer;
        answerList(0,candidates,answer,temp,target);
        return answer;
    }
};