//print matrix in spiral manner
//https://leetcode.com/problems/spiral-matrix/

/*
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int left = 0;
        int right = m-1;
        int top =0;
        int bottom = n-1;
        vector<int> ans;
        //right
        while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            ans.push_back(matrix[top][i]);
        }
        top++;

        //bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top<=bottom){//checking if top still has elements or not
            //left
        for(int i=right;i>=left;i--){
            ans.push_back(matrix[bottom][i]);
        }
        bottom--;
        }
        if(left<=right){//checking if left still has elements or not
        //top
        for(int i=bottom;i>=top;i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
        }
        }
        
        return ans;
    }
};
TC => O(n*m)
SC => O(n*m)
*/