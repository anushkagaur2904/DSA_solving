//Largest Odd Number in a String
//https://leetcode.com/problems/largest-odd-number-in-string/description/
//Given a string num that represents a large integer, return the largest-valued odd integer

/*
Example 1
Input:
 s = "5347"
Output:
 "5347"
Explanation:
 The odd numbers formed by the given string are → 5, 3, 53, 347, 5347. The largest odd number without leading zeroes is 5347.

Example 2
Input:
 s = "0214638"
Output:
 "21463"
Explanation:
 The odd numbers formed by the string are → 1, 3, 21, 63, 463, 1463, 21463. We can't use numbers starting with 0, so the largest valid odd number is 21463.
            
*/

//+++++++++APPROACH+++++++++
/*
Idea:
Traverse the string from right to left
Find the first odd digit
Return substring from 0 to that index
If no odd digit → return empty string

int i;
for(i=s.size()-1;i>=0;i--){
    if((s[i]-'0')%2==1){
        break;//break the loop if we find an odd digit
    }
}
if(i<0)return "";//else return empty string
string ans = s.substr(0,i+1);//else return substring from 0 to that index

//remove leading zeroes
int j=0;
while(j<ans.size() && ans[j]=='0')j++;//move j until we find a non-zero character
return ans.substr(j);//return substring from j to end

TC: O(n) to traverse the string
SC: O(n) for the answer string in worst case (if all digits are odd)
*/


/*
🔍 Why do we write num[i] - '0'?

In C++, when you access a character from a string:

num[i]

👉 It gives a character, not a number.

For example:

string num = "35427";
cout << num[0];   // Output: '3' (character, not integer 3)
⚠️ Problem:

You cannot directly do math like % 2 on a character meaningfully.

Because internally:

'3' → ASCII value 51
'4' → ASCII value 52
✅ Solution: Convert char → int

We convert it using:

num[i] - '0'

👉 Why this works:

ASCII of '3' = 51
ASCII of '0' = 48

So:

'3' - '0' = 51 - 48 = 3

Now we get the actual integer digit ✅

💡 Example:
char ch = '7';

int digit = ch - '0';  // 55 - 48 = 7
🔥 In your condition:
if((num[i] - '0') % 2 == 1)

Step-by-step:

Convert '7' → 7
Check 7 % 2 == 1 → odd number ✔️
❌ What happens without - '0'?
if(num[i] % 2 == 1)

👉 This uses ASCII:

'7' = 55 → 55 % 2 = 1 (works by coincidence)
BUT this is bad practice and unreliable conceptually
🧠 Interview Tip:

Always say:

“We subtract '0' to convert a character digit into its integer value using ASCII difference.”
*/