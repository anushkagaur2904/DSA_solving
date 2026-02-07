//union of two sorted arrays
//https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
/*
arr1[]=[1,1,2,3,4,5]
arr2[]=[2,3,4,4,5,6]
union[]=[1,2,3,4,5,6]
dont keep duplicates
*/

//+++++++++BRUTE+++++++++++++
/*
//step 1 define set 
set<int> st
for(int i=0;i<n1;i++){
    st.insert(arr1[i]) TC=> O(n1logn) where n is size of set
}
for(int i=0;i<n2;i++){
    st.insert(arr2[i]) TC=> O(n2logn)
}

//step2
i=0
union[st.size()]
for(auto it:st){
    union[i++]=it; TC => O(n1+n2) in worst case if every element is unique
    //or if maintaining a list or vector union.push_back(it)
}
//TC => O(n1logn + n2 logn) + O(n1+n2)
//SC => O(n1+n2) + O(n1+n2) one for set one for union
*/

//+++++++++OPTIMAL++++++++++++
/*
2 pointer approach
arr1[]=[1,1,2,3,4,5]
        i
arr2[]=[2,3,4,4,5,6]
        j
take the smaller one and move pointer ahead

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int n1 = a.size();
        int n2 = b.size();
        int i=0;
        int j=0;
        vector<int> unionArr;
        while(i<n1 && j<n2){
            if(a[i]<=b[j]){
                if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
            } 
            // ==0 isliye ki agar first element ho toh usse pehle koi hai hi nhi jisse compare kre toh vo toh add hoga hi hoga
            else{
                if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                }
                j++; 
            }
        }
        while(j<n2){
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                    unionArr.push_back(b[j]);
                }
                j++; //baaki bache elements ke liye
        }
        while(i<n1){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                    unionArr.push_back(a[i]);
                }
                i++;
        }
        return unionArr;
    }
    //TC=> O(n1+n2)
    //SC=>O(n1+n2) in worst case ..this SC is for returning the answer ...not for solving
};
*/