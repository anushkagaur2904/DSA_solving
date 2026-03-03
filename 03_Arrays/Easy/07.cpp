//move all zeros to end of array
//https://leetcode.com/problems/move-zeroes/description/

//+++++++++++++BRUTE+++++++++++++++++
/*
pick up all non zeros and store them
//step 1 => O(n)
temp=[]
for(i=0 to n){
    if(arr[i]!=0){
        temp.add(arr[i]);
    }
}

//step 2 all non zeros at front => O(x) if x if non zero
for(i=0;i<temp.size();i++){
    arr[i]=temp[i]
}

//step 3 all zeros at end => O(n-x)
num_non_zero = temp.size()
for(i=num_non_zero ;i<n;i++){
    arr[i]=0;
}
//TC => O(2n)
//SC => O(x) at worst case it is O(n) i.e no zero

*/

//++++++++++++OPTIMAL+++++++++++++++++
/*
move the elements and use 2 pointer approach
arr[] = [1,0,2,3,2,0,0,4,5,1]
           j i
j will point towards 0 and i will point towards non zero number
swap j and i

//step 1 find first zeroth element => O(x) where x is first index where zero was found
j=-1
for(i=0;i<n;i++){
    if(arr[i]==0){
        j=i;
        break;
    }
}
if(j==-1) return // mtlb array mein koi zero nhi

//step 2 => O(n-x)
for(i=j+1;i<n;i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
}
//TC => O(n)
//SC => O(1) but modifiying the array,,,,no extra space
*/

