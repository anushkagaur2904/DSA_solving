//7 MARCH 2026
//https://leetcode.com/problems/minimum-number-of-flips-to-make-the-binary-string-alternating/description/?envType=daily-question&envId=2026-03-07

/*
Rotation is handled by s+s, and flipping cost is computed by comparing with the two possible alternating patterns using a sliding window.

This problem combines rotation (type-1) and flip (type-2). The trick is realizing that rotating the string means we must check every rotation of the string and see how many flips are needed to make it alternating.

But instead of actually rotating the string each time (which would be slow), we use a sliding window on s + s.

Why s + s ?

Operation-1 allows rotation.

Example:

s = 111000
rotations:
111000
110001
100011
000111
001111
011110

Instead of rotating repeatedly, we do:

ss = s + s

Then we check windows of size n inside ss.

Each window = one possible rotation.

Two Alternating Patterns

For length 6:

Pattern A (starting with 0)

010101

Pattern B (starting with 1)

101010

We track mismatches:

diff1 → mismatches with 010101...
diff2 → mismatches with 101010...


Instead of recalculating parity relative to window start, we build the alternating patterns for the whole 2*n string.

So we create:

alt1 = 0101010101...
alt2 = 1010101010...

length = 2*n.

Then simply compare:

ss[i] vs alt1[i]
ss[i] vs alt2[i]

Now rotations automatically work correctly.

SOMETIMES BUG HAPPEN CUZ:
When the window slides, the pattern alignment changes, but your code is still comparing using the original index parity.
We compare characters using:

(i % 2 ? '1' : '0')

But remember:

When we slide the window, the start of the window changes.

Example window:

ss index: 3 4 5 6 7 8

Inside the window these become:

window index: 0 1 2 3 4 5

But your code still uses the global index parity.

So the alternating pattern becomes misaligned.
*/

/*
class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        string ss = s+s;
        int ans = INT_MAX;
        int diff1=0;
        int diff2=0;
        string alt1="";
        string alt2="";

        for(int i=0;i<2*n;i++){
            if(i%2){
                alt1+='1';
                alt2+='0';
            }
            else{
                alt1+='0';
                alt2+='1';
            }
        }
        for(int i=0;i<2*n;i++){
            if(ss[i]!=alt1[i]){
                diff1++;
            }
            if(ss[i]!=alt2[i]){
                diff2++;
            }
            if(i>=n){
                if(ss[i-n]!= alt1[i-n]){
                    diff1--;
                }
                if(ss[i-n]!= alt2[i-n]){
                    diff2--;
                }
            }
            if(i>=n-1){
                ans = min(ans,min(diff1,diff2));
            }
        }
        return ans;
    }
};
//TC => O(N)
*/