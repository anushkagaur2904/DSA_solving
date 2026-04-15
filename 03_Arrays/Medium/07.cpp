//Rearrange array elements by sign
//https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

//FIRST VARIETY : EQUAL NUMBER OF POSITIVE AND NEGATIVE

//+++++++++BRUTE++++++++++++
/*
pos and neg 2 arrays

for(int i=0;i<n;i++){
    if(arr[i]<0){
        neg.push_back(arr[i]);
    }
    else{
        pos.push_back(arr[i]);
    }
}
for(i=0;i<n/2;i++){
    arr[2*i]=pos[i];
    arr[2*i+1]=neg[i];
}
TC => O(n) + O(n/2)
SC => O(n)
*/
 
//+++++++++OPTIMAL++++++++++++
/*
not possible to reduce SC but we can try for TC

vector<int> ans(n,0);
int n = nums.size();
int posIndex=0;
int negIndex=1;

for(int i=0;i<n;i++){
    if(nums[i]<0){
        ans[negIndex]=nums[i];
        negIndex+=2;
    }else{
        ans[posIndex]=nums[i];
        posIndex+=2;
    }
}
return ans;

TC => O(n)
SC => O(n)
*/

//VARIETY 2 : UNEQUAL NUMBER OF POSITIVE AND NEGATIVE

/*
FALL BACK TO BRUTE FORCE

vector<int> pos;
vector<int> neg;
int n = arr.size();

for(int i=0;i<n;i++){
    if(arr[i]<0){
        neg.push_back(arr[i]);
    }
    else{
        pos.push_back(arr[i]);  
    }
}
if(pos.size()>neg.size()){
    for(int i=0;i<neg.size();i++){//this handles pos=neg case as well
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    int index = 2*neg.size();
    for(int i=neg.size();i<pos.size();i++){//baaki bache pos daal do
        arr[index]=pos[i];
        index++;
    }
}
else{
    for(int i=0;i<pos.size();i++){//this handles pos=neg case as well
        arr[2*i]=pos[i];
        arr[2*i+1]=neg[i];
    }
    int index = 2*pos.size();
    for(int i=pos.size();i<neg.size();i++){//baaki bache neg daal do 
        arr[index]=neg[i];
        index++;
    }
}

TC => O(n) + O(min(pos,neg)) + O(leftovers)
SC => O(n)
 */

