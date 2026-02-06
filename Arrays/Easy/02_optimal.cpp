//Second Largest Element in Array

/*
class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int n = arr.size();
        int sLargest = -1;//INT_MIN if all negative
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                sLargest=largest;
                largest=arr[i];
            }
            else if(arr[i]<largest && arr[i]>sLargest){
                sLargest=arr[i];
            }
        }
        return sLargest;
        
        //TC => O(N) 
    }
};
*/