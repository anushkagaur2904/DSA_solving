//Selection Sort

/*
select minimum and swap
swap at index 0 and min-index[0 to n-1]
swap at index 1 and min-index[1 to n-1]
swap till n-2th index

int n = arr.size();
        for(int i=0;i<n-1;i++){
            int mini=i;
            for(int j=i;j<n;j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
            swap(arr[mini],arr[i]);
        }

swap =>
temp=arr[mini]
arr[mini]=arr[i]
arr[i]=temp

TC=> n+n-1+n-2+..........+2+1
= n(n+1)/2
= O(n^2) for best avg and worst
*/
