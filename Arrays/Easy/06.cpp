//https://leetcode.com/problems/rotate-array/
/*
left rotate array by D places
let array size be 7
if u rotate 7 times then original array comes
if d= 8 => 7+1 i.e just 1 rotation
if d=15 => 7+7+1 i.e just 1 rotation
d = d%N where N is size of array
*/
//+++++++++++BRUTE++++++++++++++++
/*
let d= 3
arr[] = [1,2,3,4,5,6,7]
put in temp => O(d)
temp[] = [1,2,3]
for(i=0;i<d;i++){
temp.push_back(arr[i])
}

shift => O(n-d)
for(i=d;i<n;i++){
    arr[i-d]=arr[i];
}

now put back temp => O(d)
int j=0;
for(i=n-d;i<n;i++){
arr[i]=temp[j];
j++;
}
another way to put back temp
for(i=n-d;i<n;i++){
arr[i]=temp[i-(n-d)]
}
TC => O(n+d)
SC => extra space O(d)
*/

/*
RIGHT ROTATE BY ONE PLACE
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> temp;
        for(int i=n-k;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-k-1;i>=0;i--){
            nums[k+i]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
        }

    }
};
*/

//++++++++++++OPTIMAL+++++++++++++++++
/*
arr[] = [1,2,3,4,5,6,7] d=3
do two reversals... [3,2,1] and [7,6,5,4]
fir vapas dono ka reversal 
reverse(a,a+d) => O(d)
reverse(a+d,a+n) => O(n-d)
reverse(a,a+n) => O(n)
SC=> O(1) no extra space used
TC => O(2n) more than brute one
*/
/*
void reverse(int arr[],int start,int end){
while(start<=end){
int temp=arr[start];
arr[start]=arr[end];
arr[end]=temp
start++
end--
}
}
*/