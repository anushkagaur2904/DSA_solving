//https://www.geeksforgeeks.org/problems/second-largest3735/1
//Second Largest Element in Array
//++++++++++++BRUTE++++++++++++++++++
/*
first sort the array 
then
int largest = arr[0];
for(i=n-2;i>=0;i--){
    if(arr[i]!=largest){
        secondL = arr[i];
        break;
    }
    else{
        secondL=-1;
    }
}
    TC => O(N + NlogN)
    for worst case the array can be 1 7 7 7 7 
*/


//+++++++++++++BETTER+++++++++++++++++++
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

//+++++++++OPTIMAL++++++++++++++
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

