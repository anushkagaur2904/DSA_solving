//31/10/2026
//DP ON GRIDS
//TWISTED MIRROR PATH COUNT
//https://leetcode.com/problems/twisted-mirror-path-count/description/

//Recursion
/*
class Solution {
public:
    int MOD = 1e9+7;
    int LEFT=0 ;//arrived at current cell from left cell
    int UP=1;//arrived at current cell from up cell
    int m;//rows
    int n;//cols

    int solve(vector<vector<int>>& grid,int i,int j,int cameFrom){
        if(i>=m || j>=n) return 0;
        if(i==m-1 && j==n-1) return 1;

        if(grid[i][j]==1){//mirror
            if(cameFrom==LEFT){
                return solve(grid,i+1,j,UP);
            }
            else{
                return solve(grid,i,j+1,LEFT);
            }
        }

        //grid[i][j]=0
        int totalPathsCount = 0;
        totalPathsCount = (totalPathsCount + solve(grid,i,j+1,LEFT)) % MOD;
        totalPathsCount = (totalPathsCount + solve(grid,i+1,j,UP)) % MOD;

        return totalPathsCount;
    }
    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        return solve(grid,0,0,LEFT);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int MOD = 1e9 + 7;

    int LEFT = 0;
    int UP = 1;

    int m, n;

    vector<vector<vector<int>>> dp;
    //3D DP

    int solve(vector<vector<int>>& grid, int i, int j, int cameFrom) {

        if(i >= m || j >= n)
            return 0;

        if(i == m-1 && j == n-1)
            return 1;

        if(dp[i][j][cameFrom] != -1)
            return dp[i][j][cameFrom];

        if(grid[i][j] == 1) {

            if(cameFrom == LEFT) {
                return dp[i][j][cameFrom] =
                    solve(grid, i+1, j, UP);
            }
            else {
                return dp[i][j][cameFrom] =
                    solve(grid, i, j+1, LEFT);
            }
        }

        int totalPathsCount = 0;

        totalPathsCount = (
            totalPathsCount +
            solve(grid, i, j+1, LEFT)
        ) % MOD;

        totalPathsCount = (
            totalPathsCount +
            solve(grid, i+1, j, UP)
        ) % MOD;

        return dp[i][j][cameFrom] = totalPathsCount;
    }

    int uniquePaths(vector<vector<int>>& grid) {

        m = grid.size();
        n = grid[0].size();

        dp.assign(m, vector<vector<int>>(
            n, vector<int>(2, -1)
        ));

        return solve(grid, 0, 0, LEFT);
    }
};
*/

//Bottom Up
//T.C : O(m*n)
//S.C : O(m*n)
/*
class Solution {
public:
    int LEFT = 0;
    int UP   = 1;
    int MOD = 1e9 + 7;
    int m, n;

    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        // t[row][col][LEFT] = ways to reach this cell by entering from the left
        // t[row][col][UP]   = ways to reach this cell by entering from above
        vector<vector<array<int, 2>>> t(m, vector<array<int, 2>>(n, {0, 0}));

        // Start cell: one way to be here (start is never a mirror, slot is arbitrary)
        t[0][0][LEFT] = 1;

        // Prefill 0th row: one way to reach each cell, until the first mirror
        for (int col = 1; col < n; col++) {
            t[0][col][LEFT] = 1;
            if (grid[0][col] == 1)
                break;          // deflected down, cells beyond stay 0
        }

        // Prefill 0th column: one way to reach each cell, until the first mirror
        for (int row = 1; row < m; row++) {
            t[row][0][UP] = 1;
            if (grid[row][0] == 1)
                break;          // deflected right, cells below stay 0
        }

        // Fill the rest
        for (int row = 1; row < m; row++) {
            for (int col = 1; col < n; col++) {

                // Entering from the left neighbour (row, col-1)
                if (grid[row][col - 1] == 1)
                    t[row][col][LEFT] = t[row][col - 1][UP];       // mirror: only UP-entrants turn right
                else
                    t[row][col][LEFT] = (t[row][col - 1][LEFT] + t[row][col - 1][UP]) % MOD;

                // Entering from the top neighbour (row-1, col)
                if (grid[row - 1][col] == 1)
                    t[row][col][UP] = t[row - 1][col][LEFT];       // mirror: only LEFT-entrants turn down
                else
                    t[row][col][UP] = (t[row - 1][col][LEFT] + t[row - 1][col][UP]) % MOD;
            }
        }

        // Destination is always empty: every arrival counts, from either side
        return (t[m - 1][n - 1][LEFT] + t[m - 1][n - 1][UP]) % MOD;
    }
};
*/
