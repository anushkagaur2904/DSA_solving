//Find the Missing Number
//https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1

//++++++++++BRUTE++++++++++++
/*
Linear Search
int n = size+1;
for(int i=1;i<=n;i++){
    bool found=false;
    for(int j=0;j< n-1;j++){
        if(arr[j]==i){
            found=true;
            break;  
        }
    }
    if(found==false){
        return i;
    }
    return -1;
}
TC => O(n^2)
SC => O(1)
*/

//++++++++++BETTER++++++++++++
/*
HASHING
int n = size+1;
vector<int> hash(n+1,0);
for(int i=0;i<n-1;i++){
    hash[arr[i]]++;
}
for(int i=1;i<=n;i++){
    if(hash[i]==0){
        return i;
    }
}
return -1;
}
TC => O(n)
SC => O(n)
*/

//++++++++++OPTIMAL++++++++++++
/*
SUM OF N TERMS FORMULA
The sum of the first n natural numbers is given by the formula (n * (n + 1)) / 2. The idea is to compute this sum and subtract the sum of all elements in the array from it to get the missing number

int n = arr.size() + 1;
  
    // Calculate the sum of array elements
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += arr[i];
    }

    // Calculate the expected sum
    long long expSum = (n *1LL* (n + 1)) / 2;  

    // Return the missing number
    return expSum - sum;
*/
