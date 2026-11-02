//Kadane's Algo and Max Subarray Sum
//https://leetcode.com/problems/maximum-subarray/
//+++++++++BRUTE++++++++++
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum = 0;
                for(int k=i;k<=j;k++){
                    sum+=nums[k];
                    maxi = max(maxi,sum);
                }
            }
        }
        return maxi;
    }
};
TC=> near about O(n^3)
SC => O(1)
*/

//+++++++++BETTER++++++++++
/*
maxi=INT_MIN;
for(i=0 to n){
    for(j=i to n){
        sum=0;
        sum+=arr[j];
        maxi = max(sum,maxi);
    }
}
TC=> near about O(n^2)  
SC => O(1)
*/

//+++++++++OPTIMAL++++++++++
/*
KADANE'S ALGO
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long maxi = LONG_MIN;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxi= max(sum,maxi);
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
TC => O(n)
SC => O(1)
*/

/*
agar question mein ho ki positive sum hi chahiye i.e including empty subarray
long long sum = 0;
maxi = LONG_MIN;
for(int i=0;i<n;i++){
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
    }
    if(sum<0){
        sum=0;
    }
}
if(maxi<0){
    return 0;
}
return maxi;
*/




