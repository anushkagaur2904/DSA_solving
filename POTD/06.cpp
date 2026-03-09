//9 MARCH 2026
//https://leetcode.com/problems/find-all-possible-stable-binary-arrays-i/description/?envType=daily-question&envId=2026-03-09

/*
Think like this:

You are building the array step by step
but you cannot put more than LIMIT same numbers in a row

So at each step check:

Can I add 0?
Can I add 1?

while respecting:

remaining zeros
remaining ones
consecutive count ≤ limit
*/
//THIS IS 3D DP and we will use recursive approach

//BINAR ARRAY CONTAINS ONLY 0 AND 1
/*
should contain zero 0
and one 1
limit se jyada koi aisi subarray na ho jisme consecutive elements ho
*/

/*
Example zero=10 one=15 limit=4
mtlb 4 se jayada consecutive 0 ya 1 nahi hone chahiye
*/

/*
class Solution {
public:
    long long dp[201][201][2];
    const int mod = 1e9+7;
    int solve(int one,int zero,bool ms,int limit){
        //ms is to check if agar last element 0 hai toh 1 se start vrna
        //vrna agar 1 hai toh 0 se start kro
        
        if(one==0 && zero==0) return 1;
        int ans=0;
        if(dp[one][zero][ms]!=-1){
            return dp[one][zero][ms];
        }
        if(ms==true)//prev I have taken 0 ...mtlb ab 1 lo limit tk
        {
            for(int i=1;i<=min(one,limit);i++){
                ans=(ans+solve(one-i,zero,false,limit)%mod)%mod;
                //idhr false mtlb ki ab 1 liya hai toh 0 lo
            }
        }
        else if(ms==false){
            for(int i=1;i<=min(zero,limit);i++){
                ans=(ans+solve(one,zero-i,true,limit)%mod)%mod;
                //idhr true mtlb ki ab 0 liya hai toh 1 lo
            }
        }
        return dp[one][zero][ms]=ans%mod;
    }
    int numberOfStableArrays(int zero, int one, int limit) {
        memset(dp,-1,sizeof(dp));
        int a = solve(one,zero,true,limit)%mod;
        int b = solve(one,zero,false,limit)%mod;
        return (a+b)%mod;
    }
};
*/