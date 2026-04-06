//Check if i bit is set or not
//https://www.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1
/*
N=13 i=2
check if 2nd bit is set or not
13 = 1  1    0        1
       (2)  (1)     (0th bit)
count bits from right to left 
second bit is 1 i.e set
*/

//++++++++BRUTE FORCE+++++++++
/*
convert number to binary then traverse from last
*/

//++++++++USE BITWISE OPERATORS+++++++++
/*
use left shift operator

suppose N=13 and i =2
1<<i = 1 left shift 2
1<<1 = 1 0
1<<2 = 1 0 0
do N & (1<<i)

i.e  1.    1.    0.    1
           1     0     0
==         1     0     0

if ((N & (1<<i))!=0) then it is set
*/

/*
using right shift

if i right shift 13 by 2 places then 1 will be rightmost bit
do & with 1

13>>2 = 0.   0.    1.    1
&1.   = 0.   0.    0.    1
==.                      1(set)

if((N>>i)&1)!=0 then set
*/
//TC and SC => O(1)