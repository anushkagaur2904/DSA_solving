//8 MARCH 2026
//https://leetcode.com/problems/find-unique-binary-string/description/?envType=daily-question&envId=2026-03-08

/*
This is a famous LeetCode problem: “Find Unique Binary String” and it has a very elegant trick using Cantor’s Diagonalization.

Since:

nums has n strings

each string has length n

all strings are unique

We can construct a new string that must be different from every string at least at one position.

🧠 Key Idea (Diagonal Trick)

Look at the i-th character of the i-th string.

If it is:

'0' → put '1'

'1' → put '0'

This guarantees the new string differs from every string at index i.

So it cannot match any string in the array.
*/

/*
class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n =nums.size();
        string ans = "";
        for(int i=0;i<n;i++){
            if(nums[i][i]=='0'){
                ans+='1';
            }
            else{
                ans+='0';
            }
        }
        return ans;
    }
};
*/