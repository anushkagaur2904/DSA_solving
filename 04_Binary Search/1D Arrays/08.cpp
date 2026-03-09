//SEARCH IN ROTATED SORTED ARRAY - I
//https://leetcode.com/problems/search-in-rotated-sorted-array/
/*
given arr[] = [4,5,6,7,0,1,2] target = 0
output : 4(index)
if does not exist then -1
*/

//++++++APPROACH 1 ++++++++
/*
Linear Search 
TC => O(N)
SC => O(1)
*/

//++++++++APPRAOCH 2 +++++++++
/*
Binary search approach since array is sorted
if u are standing somehwere in the array then either the left half or the right half must be sorted

[4  5   6   7   0   1   2] target =0
low         mid          high

arr[mid] = 7
since 4<7 that means left half is sorted
now check if target can be in left half
0 is less than 7 but not greater than 4
so eliminate left half

low = mid+1;
now arr[mid] = 1
left half is sorted
now 0 is less than 1 and >=0
high=low and eliminate right half
arr[mid] = 0
index = 4
*/

/*
ANOTHER EXAMPLE target =3 
arr[mid] = 7
left half is sorted (4<=7)
3 is less than 7 but not greater than 4
eliminate left half

low = mid+1
arr[mid] =1
left half is sorted 
but 3 is not less than 1
eliminate left half

low=mid+1
arr[mid]=2
2<=2 left half is sorted
but 3 does not lie on left half
basically
low <= target <= high

low = mid+1
but now array is over so low is on imaginary index
low>=high now
so index = -1
*/

/*
TC => O(log N)
SC => O(1)
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
            if(nums[mid]==target) return mid;
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
        return -1;
    }
};
*/