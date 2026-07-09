class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> leftsum;
        int n =nums.size();
        int lsum=0,total=0;
        for(int i=0;i<n;i++){
          total+=nums[i];
        }
        for(int i =0;i<n;i++){
            int rightsum=total-lsum;
            lsum+=nums[i];
            if(lsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};