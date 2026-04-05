//INTRO
//Convert to Binary and vice versa

/*
//https://www.geeksforgeeks.org/problems/decimal-to-binary-1587115620/1
string convert2Binary(int n){
    string res = "";
    while(n>0){
        if(n%2==1){
            res+='1';
        }
        else{
            res+='0';
        }
        n/=2;
    }
    reverse(res.begin(), res.end());
    return res;
}
TC => O(log n base 2)
SC => O(log n base 2)
*/

/*
//https://www.geeksforgeeks.org/problems/binary-number-to-decimal-number3525/1
int convert2Decimal(string x){
    int len = x.length();
    int p2=1;
    int num=0
    for(i=len-1;i>=0;i--){
        if(x[i]=='1'){
            num=num+p2;
        }
        p2=p2*2;//ye apne aap power compute krta rhega
    }
    return num;
}
TC => O(n) where n is the length of the binary string
SC => O(1) as we are using only a constant amount of extra space
*/

/*
int x=13;
int mein 32 bits store hote hai
toh 13 ko binary mein convert krne ke liye hum 32 bits ka use krenge
toh fir 00000000 0000 0000 0000 0000 0000 1101
28 bits of 0 hoge

long long is 64 bits ka hota hai toh usme 52 bits of 0 hoge
*/

/*
One's Complement
The one's complement of a binary number is obtained by flipping all the bits.

Example: The one's complement of 13 (binary 1101):

Binary of 13     : 0000 1101
One's Complement : 1111 0010
Two's Complement
The two's complement is obtained by taking the one's complement of a number and adding 1.

Example: The two's complement of 13 (binary 1101):

One's Complement : 1111 0010
Add 1            : 1111 0011
Two's Complement : 1111 0011
*/

/*
AND Operator (&)
If both corresponding bits are 1, the resulting bit is 1; otherwise, it is 0.

13: 1101
 7: 0111
&  : 0101 → 5
OR Operator (|)
If either corresponding bit is 1, the resulting bit is 1.

13: 1101
 7: 0111
|  : 1010 
XOR Operator (^)
If bits differ, the result is 1; if the same, result is 0.
even number of 1s = 0
odd number of 1s = 1

13: 1101
 7: 0111
^  : 1010 → 10
NOT Operator (~)
Flips all bits of the number.

 5: 0000 0101
~5: 1111 1010 → -6 (in two's complement)
*/

//+++++++++RIGHT SHIFT+++++++++++
/*
x = 13 >> 1
13 = 1 1 0 1
x = 0 1 1 0 = 6 

x = 13 >> 2
x = 0 0 1 1 = 3

x = 13 >> 4
x = 0 0 0 0 = 0
 
x >> k = x/2^k
*/

/*
if x = -13
how does computer store it?? Ans => 2s complement

if 31st bit is 0 then positive number
if it is 1 then negative number
*/


/*
what is the largest number that integer can store??
ANS => 2^31 - 1 = INT_MAX

what is the smallest number that integer can store??
ANS => -2^31 = INT_MIN
*/

//++++++++LEFT SHIFT++++++++++
/*
x = 13 << 1
x = 1 1 0 1 0 = 26

x = 13 << k
x = num * 2^k

if (2^31 - 1) << 1 => OVERFLOW
*/