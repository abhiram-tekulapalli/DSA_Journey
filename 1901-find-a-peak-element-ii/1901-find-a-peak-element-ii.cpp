class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low = 0;
        int high = mat[0].size() - 1;

        while(low <= high) {
            int mid = (low + high) / 2;

            int maxi = INT_MIN;
            int mr = -1;

            for(int i = 0; i < mat.size(); i++) {
                if(mat[i][mid] > maxi) {
                    maxi = mat[i][mid];
                    mr = i;
                }
            }

            int left = (mid == 0) ? -1 : mat[mr][mid - 1];
            int right = (mid == mat[0].size() - 1) ? -1 : mat[mr][mid + 1];

            if(left > maxi) {
                high = mid - 1;
            }
            else if(right > maxi) {
                low = mid + 1;
            }
            else {
                return {mr, mid};
            }
        }

        return {-1, -1};
    }
};