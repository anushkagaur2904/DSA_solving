//Longest Common Prefix
//https://leetcode.com/problems/longest-common-prefix/description/
/*
Example 1
Input:
 str = ["flower", "flow", "flight"]
Output:
 "fl"
Explanation:
 All strings in the array begin with the common prefix "fl".

Example 2
Input:
 str = ["apple", "banana", "grape", "mango"]
Output:
 ""
Explanation:
 None of the strings share a common starting sequence, so the result is an empty string.          
*/

//+++++++++APPROACH+++++++++
/*
The common prefix across all strings must exist between the smallest and largest string when sorted lexicographically(dictionary order).
Sorting the array helps bring these boundary strings to the extremes.
By comparing only the first and last strings, we can determine the full common prefix shared by the entire array.
Character-wise comparison from the beginning allows us to identify where the prefix stops.
The point at which the characters start differing marks the end of the shared prefix.
The portion before this mismatch is the longest common prefix among all strings.

you will be given vector of strings, and you need to find the longest common prefix among them.

//Handle case where the input vector is empty
if(str.empty()) {
    return "";
}

//sort strings lexicographically
sort(str.begin(), str.end());

//First string in sorted order
string first = str[0];

//Last string in sorted order
string last = str[str.size() - 1];

//To store common prefix
string ans = "";

//Compare characters upto minimum length of first and last string
int minLength = min(first.size(), last.size());

for(int i = 0; i < minLength; i++) {
    if(first[i] == last[i]) {
        ans += first[i]; //append matching character to ans
    } else {
        break; //stop at first mismatch
    }
}
return ans;

Time Complexity: O(N * log N + M), where N is the number of strings and M is the minimum length of a string. The sorting operation takes O(N * log N) time, and the comparison of characters in the first and last strings takes O(M) time.

Space Complexity: O(M), as the ans variable can store the length of the prefix which in the worst case will be O(M).
*/

