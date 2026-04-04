//Swap two numbers
//https://www.geeksforgeeks.org/problems/swap-two-numbers3844/1
/*
if a=5 and b=6
after swapping a=6 b=5
*/

//++++++++USING THIRD VARIABLE++++++++
/*
temp=a;
a=b;
b=temp;
*/

//++++++++WITHOUT THIRD VARIABLE+++++++++
/*
use XOR operator
even number of 1s = 0
odd number of 1s = 1

5 XOR 5 = 0 cuz 5 = 101 in binary so even number of 1s in every row

a = a^b
b= a^b => (a^b)^b = a cuz b^b=0
a= a^b => (a^b)^b => (a^b)^a = b (cuz b is a now)
return {a,b}
*/