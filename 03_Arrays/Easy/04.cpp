//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
//check if array is sorted and rotated
//KEY TAKEAWAY Sorted + rotated array ⇒ at most ONE order violation
//TC -> O(N)
//SC -> O(1)
/*
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                count++;
            }
            if(count>1){
                return false;
            }
            }
        return true;
    }
};
*/