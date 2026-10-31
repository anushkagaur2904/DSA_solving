//Largest Divisible Subset
//https://leetcode.com/problems/largest-divisible-subset/description/

//Recursion
/*
class Solution {
public:
    void solve(int index,vector<int>& nums,vector<int>& result,vector<int>& temp,int prev){
        
        if(index>=nums.size()){
            if(temp.size()>result.size()){
                result=temp;
            }
            return;
        }

        //take option
        if(prev==-1 || nums[index]%prev==0){
            temp.push_back(nums[index]);//take
            solve(index+1,nums,result,temp,nums[index]);
            temp.pop_back();//not take krne ke liye pop back
        }

        solve(index+1,nums,result,temp,prev);//not take
    }
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(begin(nums),end(nums));

        vector<int> result;
        vector<int> temp;

        int prev = -1;
        solve(0,nums,result,temp,prev);

        return result;
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));

        vector<int> dp(n,1);
        vector<int> prev_index(n,-1);

        int last_chosen_index = 0;
        int maxL = 1;

        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0){
                    if(dp[i]<dp[j]+1){
                        dp[i]=dp[j]+1;
                        prev_index[i]=j;
                    }
                    if(dp[i]>maxL){
                        maxL = dp[i];
                        last_chosen_index = i;
                    }
                }
            }
        }
        vector<int> result;
        while(last_chosen_index != -1){
            result.push_back(nums[last_chosen_index]);
            last_chosen_index = prev_index[last_chosen_index];
        }
        return result;
    }
};
*/