//Second Largest Element in array
/*
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        //first pass
        int largest = arr[0];
        int n = arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        //second pass
        int sLargest = -1; //INT_MIN if negative elements also
        for(int i=0;i<n;i++){
            if(arr[i]>sLargest && arr[i]!=largest){
                sLargest =arr[i];
            }
        }
        return sLargest;
        //TC => O(N+N) = O(2N)
    }
};
*/
