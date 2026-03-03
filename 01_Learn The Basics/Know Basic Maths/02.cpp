//Reverse a number
//reverse of 10400 is 401

/*
revN=0
while(n>0){
    lastDigit = n%10
    n=n/10
    revN = (revN*10)+lastDigit
}
*/
/*
class Solution {
public:
    int reverse(int x) {
          long long revNum = 0;

        while (x != 0) {
            int lastdigit = x % 10;
            x /= 10;

            if (revNum > INT_MAX / 10 || (revNum == INT_MAX / 10 && lastdigit > 7)) return 0;
            if (revNum < INT_MIN / 10 || (revNum == INT_MIN / 10 && lastdigit < -8)) return 0;

            revNum = revNum * 10 + lastdigit;
        }

        return static_cast<int>(revNum); 
    }
};

*/