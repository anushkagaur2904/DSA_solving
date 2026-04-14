//Quick Sort
//https://www.geeksforgeeks.org/problems/quick-sort/1
//Better than mergesort in terms of SC as it doesnt use extra space for merging

/*
quickSort(arr,low,high){
    if(low<high){
        int partitionIndex = partition(arr,low,high);
        quickSort(arr,low,partitionIndex-1);
        quickSort(arr,partitionIndex+1,high);
    }
}

int partition(arr,low,high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<==arr[pivot] && i<=high){//remember <=
            i++;
        }
        while(arr[j]>arr[pivot] && j>=low){//remember >
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}
//TC => O(nlogn)
//SC => O(1)
*/
