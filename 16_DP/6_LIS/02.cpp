//Print LIS
//https://www.geeksforgeeks.org/problems/printing-longest-increasing-subsequence/1

/*
class Solution {
  public:
      vector<int> getLIS(vector<int>& arr) {
          int n = arr.size();
          if (n == 0) return {};

          // t[i] = Length of LIS ending at index i
          vector<int> t(n, 1);

          // prevIndex[i] stores the index of the previous element in the LIS ending at i
          vector<int> prevIndex(n, -1);

          int maxLIS = 1;
          int LISindex = 0; // Tracks the ending index of the overall longest LIS

          // Try making every element the ending element of LIS
          for (int i = 0; i < n; i++) {
              // Check all previous elements
              for (int j = 0; j < i; j++) {
                  // If arr[i] can extend the LIS ending at j
                  if (arr[j] < arr[i]) {
                      if (t[j] + 1 > t[i]) {
                          t[i] = t[j] + 1;
                          prevIndex[i] = j; // Store parent index
                      }
                  }
              }

              // Update the overall maximum LIS length and store its ending index
              if (t[i] > maxLIS) {
                  maxLIS = t[i];
                  LISindex = i;
              }
          }

          // Backtrack to reconstruct the LIS (Logic from the image)
          vector<int> result;
          while (LISindex != -1) {
              result.push_back(arr[LISindex]);
              LISindex = prevIndex[LISindex]; // Move to parent index
          }

          // The array was constructed backwards, so reverse it
          reverse(result.begin(), result.end());

          return result;
      }
  };
*/