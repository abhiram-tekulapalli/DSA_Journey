class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) {
        int XR=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        long long cnt=0;
        for(int i =0;i<nums.size();i++){
          XR=XR^nums[i];
          int x= XR;
          cnt+=mp[x];
          mp[XR]++;
        }
        return cnt;
    }
};