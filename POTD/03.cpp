//2 November 2026
//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/description/
//Minimum Moves to Equal Array Elements II 

//Approach 1
/*
sab element ko target bana ke number of operations nikalo
fir minimum nikalo
*/

//Approach 2
/*
sort and find mid
fir isi ko target banao

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        int mid = nums[n/2];

        int moves=0;
        for(int i=0;i<n;i++){
            moves += abs(nums[i]-mid);
        }
        return moves;
    }
};
*/

//Approach 3
/*
mid nikalo sort krke
moves += abs(nums[i]-mid)
moves += abs(nums[n-i-1] - mid);
basically left and right half ko ek saath access krte jao
toh loop half hogya

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        sort(begin(nums),end(nums));
        int mid = nums[n/2];

        int moves=0;
        for(int i=0;i<n/2;i++){
            moves += abs(nums[i]-mid);
            moves += abs(nums[n-i-1]-mid);
        }
        return moves;
    }
};
*/
//TC-> O(nlogn) + O(N)

//Approach 4
/*
use nth_element (ye bta dega ki uss index pe kaunsa element hai)
aise krke mid nikalo

class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        nth_element(begin(nums),begin(nums)+n/2,end(nums));
        int mid = nums[n/2];

        int moves=0;
        for(int i=0;i<n/2;i++){
            moves += abs(nums[i]-mid);
            moves += abs(nums[n-i-1]-mid);
        }
        return moves;
    }
};
*/
//TC -> O(N) + O(N)