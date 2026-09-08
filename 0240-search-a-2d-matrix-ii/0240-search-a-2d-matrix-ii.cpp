class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row =matrix.size()-1;
        int column=0;
        while(row>=0 && column<=matrix[0].size()-1){
            if(target>matrix[row][column]){
                column++;
            }
            else if (target <matrix[row][column]){
                row--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};