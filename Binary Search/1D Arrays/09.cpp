//SEARCH IN ROTATED SORTED ARRAY - II (WITH DUPLICATES)
//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/1939061931/
/*
arr[] = [7 8 1 2 3 3 3 4 5 6] target =3
tell whether exists or not

if u have to tell the index then binary search wont work, do linear search

arr[] = [3,1,2,3,3,3,3]
arr[mid] =3 (first and last element same as mid)
ab sorted half kaise pta chlega?????
toh strategy fail

SO trim down this condition
if arr[mid]==target and arr[low]=arr[mid]=arr[high]
low++,high--
i.e shrink search space
*/

/*
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size() -1;
        while(low<=high){
            int mid = (low+high)/2;
            //the left side is sorted
            if(nums[mid]==target) return true;
            if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                    low++,high--;
                    continue;
                }//shrink down the search space
            if(nums[low]<=nums[mid]){
                //figure out if element lies on left half or not
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};
*/

/*
TC => O(log n base 2) avg case
    worst case if max are duplicates => O(N/2) when u shrink almost high
*/