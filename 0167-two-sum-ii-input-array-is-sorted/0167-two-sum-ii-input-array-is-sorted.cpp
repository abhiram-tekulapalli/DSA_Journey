class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = numbers.size()-1;
        int i =0;
        vector<int>ans;
        while(i<j){
            long long sum=numbers[i]+numbers[j];
            if(sum>target){
                j--;
            }
            else if (sum<target){
                i++;
            }
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};