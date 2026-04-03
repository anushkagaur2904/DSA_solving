//POW(x,n)
//https://leetcode.com/problems/powx-n/description/
/*
to get x^n
QUES 1 -> can n be negative?
*/

//+++++++++BRUTE FORCE APPROACH++++++++++++++
/*
loop from 1 to n and keep multiplying x with itself
if n is negative but we will have to take the inverse of x and then multiply it with itself
divide by 1/x^n
whenever u are converting take care of overflow and use long long
TC = O(n)
SC = O(1)

for(int i=1; i<=n; i++){
    ans = ans*x;
}
if(n<0){
    ans = 1/ans;
}
*/

//+++++++++OPTIMISED APPROACH++++++++++++++
/*
2^10 = (2*2)^5 = 4^5
4^5 = 4 * 4^4 = 4 * (4*4)^2 = 4 * 16^2
16^2 = (16*16)^1 = 256^1 = 256
256^1 = 256 * 256^0 = 256 * 1 = 256
TC = O(logn base 2)

if n is even -> x^n = (x*x)^(n/2)
if n is odd -> x^n = x * (x*x)^(n/2)

if n is negative -> x^n = 1/x^-n i.e do as brute force

class Solution {
public:
    double myPow(double x, int n) {
        long long N = n;  // convert to long long

        if (N < 0) {
            x = 1 / x;
            N = -N;  // safe now
        }

        double ans = 1.0;

        while (N > 0) {
            if (N % 2 == 1) {
                ans *= x;
            }
            x *= x;
            N /= 2;
        }

        return ans;
    }
};

| N                | x   | ans  |
| ---------------- | --- | ---- |
| 10               | 2   | 1    |
| 5                | 4   | 1    |
| 5 odd → ans=4    |     |      |
| 2                | 16  | 4    |
| 1                | 256 | 4    |
| 1 odd → ans=1024 |     |      |
| 0                | —   | 1024 |

*/
