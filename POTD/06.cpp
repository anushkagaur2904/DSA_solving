//5th nov 2026
//Find the Distance Value Between Two Arrays
//https://leetcode.com/problems/find-the-distance-value-between-two-arrays/description/

/*
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count =0;
        int n  = arr1.size();
        int m = arr2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(abs(arr2[j]-arr1[i])<=d){
                    count++;
                    break;
                }
            }
        }
        return n-count;
    }
};
*/