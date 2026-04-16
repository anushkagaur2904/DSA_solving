//MAX CONSECUTIVE ONES III

/*
arr[] = [1 1 1 0 0 0 1 1 1 1 0] K=2
u can flip atmost 2 zeroes

so  the longest subarray with max zeroes as K (at most)
*/

//+++++++++BRUTE FORCE+++++++++++++++
/*
generate all subarrays and count the number of zeroes in each subarray and check if it is less than or equal to K

maxLen=0;
for(int i=0;i<n;i++){
    countZero=0;
    for(int j=i;j<n;j++){
        if(arr[j]==0){
            countZero++;
        }
        if(countZero<=K){
            maxLen=max(maxLen,j-i+1);
        }
        else{
            break;
        }
    }
}

TC => O(n^2)
SC => O(1)
*/

//+++++++++OPTIMIZED APPROACH+++++++++++++++
/*

*/
zeros=0
