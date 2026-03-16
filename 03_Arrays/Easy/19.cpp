//Sort an array of 0s, 1s and 2s
//Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

//+++++++++BRUTE FORCE++++++++++++++
/*
We are given an array containing only 0s, 1s, and 2s. Since the values are fixed and known, the simplest approach is to first count how many 0s, 1s, and 2s are present in the array. After counting, we overwrite the original array based on the frequency of these values first fill it with 0s, then 1s, then 2s. This does not require any extra array and modifies the input array in-place.
Initialize three counters to count the frequency of 0s, 1s, and 2s
Loop through the array once and count each number
In the second loop, fill the array based on the frequency of each number: first 0s, then 1s, then 2s

int count=0,count1=0,count2=0;
for(int i=0;i<n;i++){
    if(nums[i]==0)count0++;
    else if(nums[i]==1)count1++;
    else count2++;
}

int index=0;
while(count0--){
    nums[index++]=0;
}
while(count1--){
    nums[index++]=1;
}
while(count2--){
    nums[index++]=2;
}

me Complexity: O(n),We traverse the array twice: once to count, once to overwrite. Each operation is O(n).

Space Complexity: O(1), We use only a constant number of counters regardless of the input size. No extra array is used.
*/

