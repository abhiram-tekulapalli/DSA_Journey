class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element,count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if(element==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int verify=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                verify++;
            }
        }
        if(verify>n/2){
            return element;
        }
        return -1;
    }
};