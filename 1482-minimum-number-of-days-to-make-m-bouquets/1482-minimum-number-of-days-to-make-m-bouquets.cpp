class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k > bloomDay.size()) return -1;
        int low =  *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
        int mid,ans;
        while(low<=high){
            mid = (low+high)/2;
            int counter=0,count=0;
            for(int i =0;i<bloomDay.size();i++){
                if(bloomDay[i]<=mid){
                    counter++;
                }
                else{
                    count+=(counter/k);
                    counter=0;
                }
            }
            count+=(counter/k);
            if(count<m){
                low=mid+1;
            }
            else{
                ans=mid;
                high  = mid-1;
            }
        }
        return ans;
    }
};