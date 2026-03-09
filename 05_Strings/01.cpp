//Remove Outermost Parentheses
//https://leetcode.com/problems/remove-outermost-parentheses/description/

/*
A primitive valid parentheses string is a valid parentheses string that cannot be split into two valid parts.

Example:

s = "(()())(())"

Primitive decomposition:

(()()) + (())

Because both parts are valid and cannot be split further.
*/
/*
For every primitive, remove its outermost parentheses.

Example:

Primitive 1

(()())

Remove outermost:

()()

Primitive 2

(())

Remove outermost:

()

Final result:

()()()
*/

/*
Dry Run

Example

s = "(()())(())"

Start:

count = 0
result = ""
i = 0
(
count = 0

Outer → skip

count = 1
i = 1
(
count = 1

Add it

result = "("
count = 2
i = 2
)

Add it

result = "()"
count = 1
i = 3
(

Add it

result = "()("
count = 2
i = 4
)

Add it

result = "()()"
count = 1
i = 5
)
count = 1

Outer → skip

count = 0

Primitive finished.

Continue next primitive (())

Result becomes:

()()()
*/
/*
class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int count=0;

        for(char c : s){

            if(c=='('){
                if(count>0) result+=c;
                count++;
            }
            else{
                count--;
                if(count>0) result+=c;
            }
        }

        return result;
    }
};
*/