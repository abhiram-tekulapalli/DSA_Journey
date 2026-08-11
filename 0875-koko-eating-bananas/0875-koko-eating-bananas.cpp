class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int mid, ans;
        while (left <= right) {
            mid = (left + right) / 2;
            long long reqdtime = 0;
            for (int i = 0; i < n; i++) {
                reqdtime += ceil((piles[i] + mid - 1 )/ mid);
            }
            if (reqdtime > h) {
                left = mid + 1;
            } else {
                ans = mid;
                right = mid - 1;
            }
        }
        return ans;
    }
};