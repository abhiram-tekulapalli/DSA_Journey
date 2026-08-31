class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
         if(k > nums.size())
            return -1;

        long long low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);

        while(low <= high) {

            long long mid = low + (high - low) / 2;

            int subarrays = 1;
            long long subarraysum = 0;

            for(int i = 0; i < nums.size(); i++) {

                if(subarraysum + nums[i] <= mid) {
                    subarraysum += nums[i];
                }
                else {
                    subarrays++;

                    if(subarrays > k)
                        break;

                    subarraysum = nums[i];
                }
            }

            if(subarrays > k) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        return (int)low;
    }
};