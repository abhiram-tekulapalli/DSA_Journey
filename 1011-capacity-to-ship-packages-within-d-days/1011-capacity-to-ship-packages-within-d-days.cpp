class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int mid,ans;
        while(low<=high){
            mid = (low+high)/2;
            int sum=0;
            int daysneeded = 1;
            for(int i=0;i<weights.size();i++){
               sum+=weights[i];
               if(sum<=mid){
                continue;
               }
               else{
                daysneeded++;
                sum=weights[i];
               }
            }
            if(daysneeded>days){
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