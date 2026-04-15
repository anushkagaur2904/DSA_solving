//Subarray with maximum sum

/*
long long sum = 0;
maxi = LONG_MIN;
ansStart=-1;
ansEnd=-1;
for(int i=0;i<n;i++){
    if(sum==0){
        start=i;//whenever sum is 0 we start new
    }
    sum+=arr[i];
    if(sum>maxi){
        maxi=sum;
        ansStart=start;
        ansEnd=i;
    }
    if(sum<0){
        sum=0;
    }
}
return maxi;
*/
