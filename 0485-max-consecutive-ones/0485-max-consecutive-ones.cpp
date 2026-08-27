class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0;
        int currmax=0;
        for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
            ++currmax;
            if(max<currmax){
                max=currmax;
            }
           }
           else{
            currmax=0;
           }
        }
        return max;
    }
};