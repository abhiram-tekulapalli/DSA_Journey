class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int low =  0,high= n-1,mid;long long missing;
        while(low<=high){
            mid =(low+high)/2;
            missing = arr[mid]-(mid+1);
            if(missing>=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low+k;
    }
};