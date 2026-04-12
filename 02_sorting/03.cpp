//Insertion Sort
//https://www.geeksforgeeks.org/problems/insertion-sort/1
/*
for(i=0;i<=n-1;i++){
j=i;
while(j>0 && arr[j-1]>arr[j]){
swap(arr[j-1],arr[j]);
j--;
}
}
TC => O(n^2) => worst case when the array is sorted in reverse order and for average case too

TC => O(n) => best case when array is already sorted
*/