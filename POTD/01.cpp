//4 MARCH 2026
//https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/?envType=daily-question&envId=2026-03-04

/*
class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();//number of rows
        int n = mat[0].size();//number of columns
        vector<int> row(m,0);
        //creates a vector of size m where all values are initialized to 0
        vector<int> col(n,0);

        //count 1s in rows and columns
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int count=0;
        
        //check special positions
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1 && row[i]==1 && col[j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};
TC => O(m*n)
*/