//set the i bit
//https://www.geeksforgeeks.org/problems/set-kth-bit3724/1
/*
N=9 i=2
N = 1   0   0   1
make it as 1    1   0   1 = 13
*/

//+++++++++BRUTE FORCE+++++++++++
/*
convert to binary
make the ith bit = 1
then conver to decimal
*/

//++++++OPTIMAL+++++++
/*
Take 1 and left shit by i places
eg. take 1 and left shift by i=2
i.e 00000000100

now OR with N
1   0   0   1
0   1   0   0

OR = 1  1  0  1

N | (1<<i)
*/