class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1)
            return 0;

        int i = 0;
        long long mul = 1;
        int cnt = 0;

        for(int j = 0; j < nums.size(); j++) {
            mul *= nums[j];

            while(mul >= k) {
                mul /= nums[i];
                i++;
            }

            cnt += j - i + 1;
        }

        return cnt;
    }
};