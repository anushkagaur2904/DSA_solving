//Leaders in an array
//https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
//+++++++++++BRUTE++++++++++
/*
vector<int> ans;
for(i=0;i<n;i++){
    bool leader = true;
    for(j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            leader=false;
            break;
        }
    }
    if(leader==true){
        ans.add(arr[i]);
    }
}
TC => O(n^2)
SC => O(n) at worst case to store answer
*/

//++++++++++++OPTIMAL++++++++++++
/*
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        // code here
        int maxi = INT_MIN;
        int n = arr.size();
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
SC => O(n) at worst case
*/
