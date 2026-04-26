//Palindrome String
//https://www.geeksforgeeks.org/problems/palindrome-string0817/1

/*
2 POINTER APPROACH

class Solution {
  public:
    bool isPalindrome(string& s) {
        // code here
        int left = 0;
        int right = s.length()-1;
        while(left<right){
            if(s[left]!=s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};

Complexity
Time: O(n)
Space: O(1)
*/