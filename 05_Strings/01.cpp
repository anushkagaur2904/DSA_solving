//Reverse string
//https://leetcode.com/problems/reverse-string/description/

/*
2 POINTER APPROACH

class Solution {
public:
    void reverseString(vector<char>& s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }
}
};
Complexity
Time: O(n)
Space: O(1)

STL => reverse(s.begin(), s.end());
*/