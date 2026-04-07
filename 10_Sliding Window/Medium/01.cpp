//Longest Substring without Repeating Characters
//https://leetcode.com/problems/longest-substring-without-repeating-characters/
/*
Eg s = cadbzabcd
answer = cadbz 
*/

//+++++++BRUTE FORCE+++++++
/*
generate all the substrings and check if they are valid or not
use 2 pointers
use hashing to check if the substring is valid or not

for(i=0;i<s.size();i++){
    hash[256]={0};
    maxLength=0;
    for(j=i;j<s.size();j++){
        if(hash[s[j]]==1){
            break;
        }
        else{
            maxLength = max(maxLength,j-i+1);
            hash[s[j]]=1;

        }
    }
}
return maxLength;

TC => O(n^2)
SC => O(256) (hash array of size 256)
*/

//+++++OPTIMIZED APPROACH+++++
/*
jaha bhi substring dikhe vaha sliding window and two pointer socho

function(string s){
    hash[256]={-1};
    l=0,r=0,maxLen=0;
    n=s.size();

    while(r<n){
        if(hash[s[r]!=-1]){//yaani ye character pehle bhi aa chuka hai
            if(hash[s[r]]>=l)//mtlb ye character abhi bhi sliding window ke andar hai
                l=hash[s[r]]+1;//toh left pointer ko uske next position pe le jao
        }
        maxLen=max(maxLen,r-l+1);//update the max length
        hash[s[r]]=r;//update the last index of the character
        r++;//move the right pointer
    }
}

TC => O(n) for traversing the string
SC => O(256) for hash array

DRY RUN IMPORTANT
*/
