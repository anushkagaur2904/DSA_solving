//BUBBLE SORT
//push the max to last by adjacent swap
//https://www.geeksforgeeks.org/problems/bubble-sort/1
/*
step 1 -> 0 to n-1
step 2 -> 0 to n-2
last -> 0 to 1

for(i=n-1;i>=1;i--){
    for(j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap
        }
    }
}

TC => O(n^2) => worst case (avg case)
*/

//++++OPTIMIZE++++++++
/*
consider array 2 3 5 15 20
check once 
if 0 swap then break
for(i=n-1;i>=1;i--){
    int didSwap =0
    for(j=0;j<i;j++){
        if(arr[j]>arr[j+1]){
            swap
            didSwap=1
        }
    }
    if(didSwap==0) break;
}
TC = > O(N) for best case
*/

