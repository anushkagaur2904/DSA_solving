//Largest element in array
//https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1
/*


class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int n= arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
        
    }
};
//TC => O(N)

/*
BRUTE FORCE
Sort then print arr[n-1]
TC => O(NlogN)
SC => O(1)
*/

//Smallest element in array
/*
int smallestElement(vector<int> &arr) {
    int minElement = arr[0];  // assume first element is smallest

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return minElement;
}

Complexity
Time: O(n)
Space: O(1)
*/

//+++++STL++++++
/*
return *max_element(arr.begin(), arr.end());
return *min_element(arr.begin(), arr.end());
*/