//left rotate array by one place
//https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
/*
temp=arr[0]
for(i=1;i<n;i++){
arr[i-1]=arr[i];
}
arr[n-1]=temp
TC => O(N)
SC => O(1) ye hai extra space used
space used in algo is O(N) cuz array is used
*/
/*
right rotate by one place
class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();
        int temp=arr[n-1];
        for(int i=n-2;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=temp;
        
    }
};
*/