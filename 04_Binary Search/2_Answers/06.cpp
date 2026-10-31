//Capacity to Ship Packages within D Days
//https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/

//Brute
/*
class Solution {
public:
    int findDays(vector<int>& weights,int cap){
        int days = 1;
        int load = 0;
        int n = weights.size();

        for(int i=0;i<n;i++){
            if(load+weights[i]>cap){
                days = days + 1;
                load = weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi = *max_element(weights.begin(),weights.end());
        int sum = accumulate(weights.begin(),weights.end(),0);

        // Linear loop trying every capacity from max element to sum
        for(int cap = maxi;cap<=sum;cap++){
            int daysReq = findDays(weights,cap);
            if(daysReq<=days){
                return cap;// Return the minimum capacity found
            }
        }
        return maxi;
    }
};
*/

//Binary Search
/*
class Solution {
public:
    int findDays(vector<int>& weights,int cap){
        int days = 1;
        int load = 0;
        int n = weights.size();

        for(int i=0;i<n;i++){
            if(load+weights[i]>cap){
                days = days + 1;
                load = weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        int ans = 0;

        while(low<=high){
            int mid = low + (high-low)/2;
            int numberOfDays = findDays(weights,mid);

            if(numberOfDays<=days){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid +1;
            }
        }
        return ans;
    }
};
*/