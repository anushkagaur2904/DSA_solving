//Count subarray sum equals K
//https://leetcode.com/problems/subarray-sum-equals-k/description/
//++++++++++BRUTE+++++++++++
/*
for(i=0 to n){
    for(j=i to n){
        sum=0;
        for(k=i to j){
            sum+=arr[k];
        }
        if(sum==k){
            count++;
        }
    }
}
TC => O(n^3)
SC => O(1)
*/

//++++++++++++BETTER++++++++++++
/*
for(i=0 to n){
    sum=0;
    for(j=i to n){
        sum+=arr[j];
        
        if(sum==k){
            count++;
        }
    }
}
TC => O(n^2)
SC => O(1)
*/

//++++++++++++OPTIMAL++++++++++++
/*
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp[0]=1;
        int preSum=0;
        int count=0;

        for(int i=0;i<nums.size();i++){
            preSum+=nums[i];
            int remove = preSum - k;
            count+=mpp[remove];
            mpp[preSum]+=1;
        }
        return count;
    }
};
TC => depends on type of map
SC => O(n)
*/
