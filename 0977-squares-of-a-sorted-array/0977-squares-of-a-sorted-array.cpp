class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int n =nums.size();
       vector<int >ans(n);
       int i=0;
       int j=n-1,k=n-1;
       while(i<=j){
        int rsquare=nums[j]*nums[j];
        int lsquare=nums[i]*nums[i];
        if(rsquare > lsquare){
            ans[k]=rsquare;
            j--;
        }
        else{
            ans[k]=lsquare;
            i++;
        }
        k--;
       }
       return ans;
    }
};