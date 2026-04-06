//Clear the i bit

/*
N=13 i=2
1   1   0   1
ans = 1001 => 9
*/

//++++++BITWISE APPROACH+++++++
/*
1   1   0   1
1   0   1   1

just set i bit =0 and do &
after &

1   0   0   1


1<<2
= 0 1 0 0
now do negation of it

1 0 1 1
now do &

N & ~(1<<i)
*/