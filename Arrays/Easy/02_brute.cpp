//Second Largest Element in Array
/*
first sort the array 
then
int largest = arr[0];
for(i=n-2;i>=0;i--){
    if(arr[i]!=largest){
        secondL = arr[i];
        break;
    }
    else{
        secondL=-1;
    }
}
    TC => O(N + NlogN)
    for worst case the array can be 1 7 7 7 7 
*/
