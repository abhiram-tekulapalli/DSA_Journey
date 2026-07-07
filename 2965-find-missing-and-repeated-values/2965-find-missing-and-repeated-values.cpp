class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int x,y;
        int size=grid.size();
        int n = size*size;
        long long sum = (1ll*n*(n+1))/2;
        long long squared_sum = (1ll*n*(n+1)*(2*n+1))/6;
        long long s=0,ss=0;
        for(int i=0;i<size;i++){
            for(int j=0;j<size;j++){
                s+=grid[i][j];
                ss+=1ll*(grid[i][j])*(grid[i][j]);
            }
        }
        int x_minus_y = sum-s;
        int x_square_minus_y_square = squared_sum-ss;
        int x_plus_y = x_square_minus_y_square/x_minus_y;
        x = (x_minus_y+x_plus_y)/2;
        y = x_plus_y-x;
        return{y,x};
    }
};