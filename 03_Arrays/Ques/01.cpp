//Reverse an Array
//https://www.geeksforgeeks.org/problems/reverse-an-array/1

/*
2 POINTER APPROACH
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int left = 0;
        int right = arr.size()-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
};
TC => O(N)
SC => O(1)
*/

/*
STL SHORTCUT
reverse(arr.begin(), arr.end());
*/