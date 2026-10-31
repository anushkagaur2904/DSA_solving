//Longest String Chain
//https://leetcode.com/problems/longest-string-chain/

//Recursion
/*
class Solution {
public:
    int n;

    bool isPred(string& prev, string& curr){
        int M = prev.length();
        int N = curr.length();

        if(M>=N || N-M!=1){
            return false;
        }

        int i = 0;
        int j = 0;

        while(i<M && j<N){
            if(prev[i]==curr[j]){
                i++;
            }
            j++;
        }
        if(i==M){
            return true;
        }
        return false;
    }
    static bool myFunction(string& word1, string& word2){
        return word1.length() < word2.length();
    }
    
    int lis(vector<string>& words,int prev_index,int index){
        if(index==n){
            return 0;
        }

        int take=0;
        int skip;

        if(prev_index==-1 || isPred(words[prev_index],words[index])){
            take = 1 + lis(words,index,index+1);
        }
        skip = lis(words,prev_index,index+1);

        return max(take,skip);
    }
    int longestStrChain(vector<string>& words) {
        n = words.size();
        sort(begin(words),end(words),myFunction);

        return lis(words,-1,0);
    }
};
*/

//Memoization
/*
class Solution {
public:
    int n;
    int t[1001][1001];

    bool isPred(string& prev, string& curr){
        int M = prev.length();
        int N = curr.length();

        if(M>=N || N-M!=1){
            return false;
        }

        int i = 0;
        int j = 0;

        while(i<M && j<N){
            if(prev[i]==curr[j]){
                i++;
            }
            j++;
        }
        if(i==M){
            return true;
        }
        return false;
    }
    static bool myFunction(string& word1, string& word2){
        return word1.length() < word2.length();
    }
    
    int lis(vector<string>& words,int prev_index,int index){
        if(index==n){
            return 0;
        }
        
        if(prev_index!=-1 && t[prev_index][index]!=-1){
            return t[prev_index][index];
        }

        int take=0;
        int skip=0;

        if(prev_index==-1 || isPred(words[prev_index],words[index])){
            take = 1 + lis(words,index,index+1);
        }
        skip = lis(words,prev_index,index+1);

        if(prev_index!=-1){
            t[prev_index][index] = max(take,skip);
        }
        return max(take,skip);
    }
    int longestStrChain(vector<string>& words) {
        n = words.size();
        memset(t,-1,sizeof(t));
        sort(begin(words),end(words),myFunction);

        return lis(words,-1,0);
    }
};
*/

//Bottom Up
/*
class Solution {
public:
    int n;

    bool isPred(string& prev, string& curr){
        int M = prev.length();
        int N = curr.length();

        if(M>=N || N-M!=1){
            return false;
        }

        int i = 0;
        int j = 0;

        while(i<M && j<N){
            if(prev[i]==curr[j]){
                i++;
            }
            j++;
        }
        if(i==M){
            return true;
        }
        return false;
    }
    static bool myFunction(string& word1, string& word2){
        return word1.length() < word2.length();
    }
    
    int longestStrChain(vector<string>& words) {
        n = words.size();
        sort(begin(words),end(words),myFunction);

        vector<int> t(n, 1);

        int maxL = 1;

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < i; j++) {

                if (isPred(words[j],words[i])) {

                    t[i] = max(t[i], t[j] + 1);
                }
            }

            maxL = max(maxL, t[i]);
        }

        return maxL;
    }
};
*/