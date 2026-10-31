//	Find row with maximum 1's
//https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1

//Brute
/*
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int n = arr.size();
        int m = arr[0].size();
        int index = -1;
        int max_count = 0;
        
        for(int i=0;i<n;i++){
            int count_row = 0;
            for(int j=0;j<n;j++){
                count_row += arr[i][j];//0 aur 1 hi hai array mein
            }
            if(count_row>max_count){
                max_count = count_row;
                index = i;
            }
        }
        return index;
    }
};
*/

//Binary Search
/*
class Solution {
    public:

      int firstOccurrence(vector<int>& row, int m, int x) {
          int low = 0;
          int high = m - 1;
          int ans = m;

          while(low <= high) {
              int mid = low + (high - low) / 2;

              if(row[mid] >= x) {
                  ans = mid;
                  high = mid - 1;
              }
              else {
                  low = mid + 1;
              }
          }

          return ans;
      }

      int rowWithMax1s(vector<vector<int>> &arr) {
          int n = arr.size();
          int m = arr[0].size();

          int index = -1;
          int max_count = 0;

          for(int i = 0; i < n; i++) {

              int firstOne = firstOccurrence(arr[i], m, 1);

              int count_ones = m - firstOne;

              if(count_ones > max_count) {
                  max_count = count_ones;
                  index = i;
              }
          }

          return index;
      }
  };
*/