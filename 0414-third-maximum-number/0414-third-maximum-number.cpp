class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long max=LONG_MIN,smax=LONG_MIN,tmax=LONG_MIN;
        for(int i =0;i<nums.size();i++){
            if(nums[i]>max){
                tmax=smax;
                smax=max;
                max=nums[i];
            }
            else if(nums[i]>smax && nums[i]<max){
                tmax=smax;
                smax=nums[i];
            }
            else if(nums[i]>tmax && nums[i]<smax){
                tmax=nums[i];
            }
        }
        if(tmax==LONG_MIN){
            return max;
        }
        return tmax;
    }
};