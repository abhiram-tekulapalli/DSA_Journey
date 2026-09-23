class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        vector<int> res;
        for(int i =0;i<spells.size();i++){
            int spell=spells[i];
            int left=0,right=potions.size()-1;
            int mid;
            while(left<=right){
                mid=(left+right)/2;
                long long prod=1LL*spell*potions[mid];
                if(prod>=success){
                   right=mid-1;
                }
                else{
                    left=mid+1;
                }
            }
            res.push_back(potions.size()-left);
        }
        return res;
    }
};