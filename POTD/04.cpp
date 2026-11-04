//3rd nov 2026
//Minimum Moves to Equal Array Elements III
//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/description/

/*
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        int last = nums[n-1];
        int moves=0;
        for(int i=0;i<n;i++){
            moves+= last - nums[i];
        }
        return moves;
    }
};
*/