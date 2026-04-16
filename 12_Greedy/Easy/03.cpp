//FRUITS INTO BASKETS

/*
arr[] = [3 3 3 1 2 1 1 2 3 3 4]
tree 0 is producing fruit of type 3

u have two baskets and your goal is to put maximum number of fruits in each basket. The only restriction is that each basket can have only one type of fruit.

u cannot skip a tree once you have started. You will pick exactly one fruit from every tree until you cannot, i.e., you will stop when you have to pick from a third fruit type.

eg 3 3 3 in one basket 
and 1 in another basket 
then u can not pick from 2 and 4 because they are different from the two types of fruits in the baskets. So the total fruits u can pick is 4.
*/

/*
max length subarray with atmost 2 types of number
*/

//++++++++BRUTE++++++++++++
/*
generate all subarrays

maxLen=0;
for(int i=0;i<n;i++){
    set<int> st;
    for(int j=i;j<n;j++){
        st.add(arr[i]);//logN time where N is size of set...very small set so overall O(1)
        if(st.size()<=2){
            maxLen = max(maxLen,j-i+1);
        }
        else{
            break;
        }
    }
}
TC => O(N^2)
SC => O(1) (at most 2 types of fruits in the set)
*/


//++++++++++MAP++++++++++++
/*

*/

maxLen=0;
