//5 MARCH 2026
//https://leetcode.com/problems/minimum-changes-to-make-alternating-binary-string/description/?envType=daily-question&envId=2026-03-05

/*
For a binary string to be alternating, it must follow one of only two patterns:

Start with 0 → 010101...

Start with 1 → 101010...

So the idea is simple:

Count how many changes are needed to convert the string into pattern 010101...

Count how many changes are needed to convert the string into pattern 101010...

Return the minimum of the two
*/

/*
Example

s = "0100"

Pattern 1 → 0101
Pattern 2 → 1010

Compare:

Index	s	Pattern1	Pattern2
0	    0	    0	    1
1	    1	    1	    0
2	    0	    0	    1
3	    0	    1	    0

Changes needed:

Pattern1 → 1 change

Pattern2 → 3 changes

Answer = 1
*/
/*
class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int start0 = 0; //string starting with 0
        int start1 = 0; ////string starting with 0

        for(int i=0;i<n;i++){
            char expected0;
            char expected1;
            if(i%2==0){
                expected0='0'; //at even index for string starting with 0 the char should be 0
                expected1='1';
            }
            else{
                expected0='1';
                expected1='0';
            }

            if(s[i]!=expected0) start0++;
            if(s[i]!=expected1) start1++;
        }
        return min(start0,start1);
    }
};
*/