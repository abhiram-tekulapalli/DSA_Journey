class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        int zeroes=0;
        for(int num : arr){
            if(num==0)zeroes++;
        }
        int i  =n-1;
        int j = n+zeroes-1;
        while(i>=0){
            if(j<n){
                arr[j]=arr[i];
            }
            if(arr[i]==0){
                j--;
                if(j<n){
                    arr[j]=0;
                }
            }
            i--;
            j--;
        }
    }
};