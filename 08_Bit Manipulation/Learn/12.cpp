//Remove the last set bit(right most)

/*
N = 13 (1   1   0   1)
Answer 1    1   0   0

N = 12(1    1   0   0)
Answer 1    0   0   0

N= 16(1 0 0 0 0 )
Answer 0 0 0 0 0 

*/

/*
N=16 1  0   0   0   0
N=15 0  1   1   1   1

N=40 1  0   1   0   0   0
N=39 1  0   0   1   1   1

N=84 1  0   1   0   1   0   0
N=83 1  0   1   0   0   1   1

Note: if N-1 then rightmost bit is turned to 0 and everything else on right is turned to 1
*/

/*
N=40
1   0   1   0   0   0

N-1=39
1   0   0   1   1   1

and do & between N and N-1
*/