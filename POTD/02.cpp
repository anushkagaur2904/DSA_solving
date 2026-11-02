//1st November 2026
//Min moves to equal array elements
//https://leetcode.com/problems/minimum-moves-to-equal-array-elements/description/


//BRUTE
/*
GREEDY CHOICE
skip max element and increment remaining n-1 elements

TC -> O(n^2)
*/

//Optimal
/*
kyuki mujhe bas difference between max and min = 0 krna hai 
toh ab ulta socho

max element ko decrease krte jao jab tk vo min ke barabar na ho

eg {1,2,3} -> {1,2,2} -> {1,2,1} -> {1,1,1}

basically har element ko min mein convert krne mein kitne steps lage 

1 ko lage 0 steps
2 ko lage (2-1) = 1 steps
3 ko lage (3-1) = 2 steps 
total 3 steps
*/

/*
Mathematical derivation
nums[0]- min + nums[1]-min + ------ 

nums[0] + nums[1] + nums[2] + ---- - (n*min)

i.e sum - n*min
*/


/*
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(begin(nums),end(nums),0);

        int min_el = *min_element(begin(nums),end(nums));

        return sum - n*min_el;
    }
};
*/
// TC -> O(2n)

/*
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int min_el = INT_MAX;

        for(int i=0;i<n;i++){
            sum+=nums[i];
            min_el = min(min_el,nums[i]);
        }
        return sum-n*min_el
    }
};
*/
//TC -> O(n)