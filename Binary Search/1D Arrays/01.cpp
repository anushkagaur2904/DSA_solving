//Binary Search
//for sorted arrays and unique arrays i.e no duplicates
//Real life example -> Dictionary

/*
[3, 4,  6,  7,  9,  12, 16, 17] n=8 target=5
low         mid             high
everything between low and high is search space
mid = (low+high)/2
*/

//+++++++ITERATIVE CODE+++++++++++
/*
f(arr,n,target){
    low=0,high=n-1
    while(low<=high){
        mid=(low+high)/2
        if(arr[mid]==target) return mid;
        else if(target>arr[mid]) low=mid+1
        else high =mid-1
    }
    return -1;
}
*/

//+++++RECURSIVE CODE++++++++
