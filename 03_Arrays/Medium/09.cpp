//Leaders in an array

//+++++++++++BRUTE++++++++++
/*
vector<int> ans;
for(i=0;i<n;i++){
    bool leader = true;
    for(j=i+1;j<n;j++){
        if(arr[j]>arr[i]){
            leader=false;
            break;
        }
    }
    if(leader==true){
        ans.add(arr[i]);
    }
}
TC => O(n^2)
SC => O(n) at worst case to store answer
*/

//++++++++++++OPTIMAL++++++++++++
/*

*/
