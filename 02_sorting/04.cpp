//Merge sort
//https://www.geeksforgeeks.org/problems/merge-sort/1
//Recursive algorithm
//instead of breaking the array into two halves, we will play around with index
/*
PSEUDOCODE:
mergeSort(arr,low,high){
    if(low>=high){
        return;
    }
    mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);//merging the two halves
}

merge(arr,low,mid,high){
    vector<int> temp;
    left=low;
    right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++; 
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
TC => O(logn base 2) for breaking the array into two halves and O(n) for merging the two halves
total TC => O(n log n base 2)
SC => O(n) for the temporary array used for merging
*/


