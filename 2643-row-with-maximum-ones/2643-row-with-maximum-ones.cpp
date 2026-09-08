class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        for(int i =0;i<mat.size();i++){
           sort(mat[i].begin(),mat[i].end());
        }
        vector<int>ans;
        for(int i =0;i<mat[0].size();i++){
            for(int j =0;j<mat.size();j++){
                if(mat[j][i]==1){
                    ans.push_back(j);
                    ans.push_back(mat[0].size()-i);
                    return ans;
                }
            }
        }
        return {0,0};
    }
};