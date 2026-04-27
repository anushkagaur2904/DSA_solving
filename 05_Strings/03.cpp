//PRINT ALL DUPLICATE CHARACTERS IN STRING

//+++++++APPROACH 1+++++++++++
/*
use hash map
#include <bits/stdc++.h>
using namespace std;

void printDuplicates(string s) {
    unordered_map<char, int> freq;

    // count frequency
    for (char c : s) {
        freq[c]++;
    }

    // print duplicates
    for (auto it : freq) {
        if (it.second > 1) {
            cout << it.first << " ";
        }
    }
}
Complexity
Time: O(n)
Space: O(n)   
*/

//++++++++++++Optimized Approach++++++++++++
/*
void printDuplicates(string s) {
    int freq[256] = {0};

    for (char c : s) {
        freq[c]++;
    }

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            cout << (char)i << " ";
        }
    }
}
*/