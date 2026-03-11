//Find the number that appears once, and the other numbers twice
//https://leetcode.com/problems/single-number/submissions/1945323987/
//++++++++++BRUTE FORCE++++++++++
/*
Linear search for each element and check if it is present in the array or not

for(i=0 to n){
    num=arr[i];
    count=0;
    for(j=0 to n){
        if(arr[j]==num){
            count++;
        }
        if(count==1){
            return num;
        }
    }
}

TC: O(n^2) because we are using two loops
SC: O(1) because we are not using any extra space
*/

//++++++++++BETTER++++++++++
/*
HASHING
arr[]=[1,1,2,3,3,4,4]
here max element is 4 , so create hash array of size 5 and initialize all elements to 0
hash[]=[0,0,0,0,0]
Now traverse the array and for each element increment the count in hash array
arr[]=[1,1,2,3,3,4,4]
hash[]=[0,2,1,2,2]
Now traverse the hash array and find the element which has count 1
hash[]=[0,2,1,2,2]
Here 2 is the element which has count 1, so return 2

maxi=arr[0];
for(i=0;i<n;i++){
    maxi=max(maxi,arr[i]);
}
hash[maxi+1]={0};
for(i=0;i<n;i++){
    hash[arr[i]]++;
}
for(i=0 to n ){
    if(hash[arr[i]==1]){
        return arr[i];
    }
}//this loop can also be from 0 to max, but it depends on the input size and the max element in the array

TC: O(n) because we are traversing the array twice
SC: O(max(arr)) because we are using hash array of size max(arr)+1

*/

//++++++++++BETTER++++++++++
/*
WHAT IF ARRAY HAS NEGATIVES OR BIG NUMBERS OF 10^9
THEN U CANT HASH
U HAVE TO USE MAP DATA STRUCTURE WITH DATA TYPE AS KEY VALUE PAIR
AND THEN KEY WILL BE THE ANSWER


for(i=0 to n){
    mpp[arr[i]]++;
}

TC for ordered map: O(nlogm) because we are inserting n elements in the map and each insertion takes logm time(m is size of map)

TC for unordered map: O(n) (best case) because we are inserting n elements in the map and each insertion takes O(1) time on average
worst case for unordered map: O(n^2) because of hash collisions
then switch back to ordered map if you want to avoid worst case of unordered map

SC: O(n) because we are using map to store the count of each element

for(auto it:mpp{
    if(it.second==1){
        return it.first;//it.first is key and it.second is value
    }
})

TC O(N/2 + 1) because we are traversing the map to find the element which has count 1, and in worst case we have to traverse half of the map
SC O(n) because we are using map to store the count of each element

Total overall 
TC => O(Nlogm) + O(N/2 + 1)
here m is size of map which is N/2 +1

SC => O(N/2 +1)

*/

//++++++++++OPTIMAL++++++++++
/*
USE XOR PROPERTY
XOR of a number with itself is 0
XOR of a number with 0 is the number itself
So if we XOR all the elements of the array then the duplicate elements will cancel out and we will be left with the number which appears once

XOR=0
for(i=0 to n){
    XOR = XOR ^ arr[i];
}
return XOR;

TC => O(n) because we are traversing the array once
SC => O(1) because we are not using any extra space
*/

//xor mt likhna code mein