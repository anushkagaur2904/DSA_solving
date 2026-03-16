//Longest subarray with sum K(positives)
//subarray is contiguous part of an array
//Give length of the longest subarray with sum K

//+++++++++BRUTE++++++++
/*
Generate all subarrays and check sum of each subarray and if sum is K then update max length
subarray-> i to j
entire array is also subarray

2 pointer approach
1. Initialize two pointers, start and end, to the beginning of the array.

for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        sum =0;
        for(k=i;k<=j;k++){
            sum+=arr[k];
        }
        if(sum==k){
            maxlen = max(maxlen,j-i+1);
        }
    }
}
print(maxlen);

TC: O(n^3) because we are generating all subarrays and calculating sum for each subarray
*/


//+++++++++BETTER++++++++
/*
add the new element to the sum and check if sum is K then update max length

for(i=0;i<n;i++){
    sum =0;
    for(j=i;j<n;j++){
        sum+=arr[j];
        if(sum==k){
            maxlen = max(maxlen,j-i+1);
        }
    }
}
print(maxlen);
TC: O(n^2) because we are generating all subarrays but we are not calculating sum for each subarray
*/

//+++++++++BETTER++++++++
/*
HASHING

*/
