//MAJORITY ELEMENT - I
//https://leetcode.com/problems/majority-element/
//ELEMENT SHOULD APPEAR MORE THAN N/2 TIMES

/*
arr[] = [2,2,3,3,1,2,2]
2 appears 4 times which is more than 7/2 = 3.5
So, 2 is the majority element
*/

//++++++++++BRUTE+++++++++
/*
har element ka count nikaalo and if count > n/2 then return that element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int count = 0;

            for(int j = 0; j < n; j++) {
                if(nums[j] == nums[i]) {
                    count++;
                }
            }

            if(count > n/2) {
                return nums[i];
            }
        }

        return -1;
    }
};

TC: O(n^2) because we are counting each element in the array
*/

//++++++++++BETTER+++++++++
/*
HASHING
Use a hash map to store the count of each element
(element, count)
in map keys are in sorted order

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/2){
                return it.first;
            }
        }
        return -1;
    }
};
//TC: O(n) + O(nlogn)
O(n) for counting the elements and O(nlogn) for sorting the map keys

//SC: O(n) because we are using a hash map to store the count of eachelement
*/ 


//++++++++++OPTIMAL+++++++++
/*
MOORE'S VOTING ALGORITHM

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el;
        int n = nums.size();

        for(int i=0;i<n;i++){
            if(count==0){
                el=nums[i];
                count=1;
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                count1++;
            }
        }
        if(count1>n/2){
            return el;
        }
        else{
            return -1;
        }
    }
};

TC: O(n) + O(n) because we are iterating through the array twice
SC: O(1) because we are using only a few variables to store the count and candidate
*/

