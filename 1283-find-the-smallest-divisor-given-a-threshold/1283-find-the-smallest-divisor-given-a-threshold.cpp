class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(),nums.end());
        int mid,ans;
        while(low<=high){
           mid=(low+high)/2;
           int sum=0;
           for(int i=0;i<nums.size();i++){
             sum+=ceil((nums[i]+mid-1)/mid);
           }
           if(sum>threshold){
            low=mid+1;
           }
           else{
            ans=mid;
            high=mid-1;
           }
        }
        return ans;
    }
};