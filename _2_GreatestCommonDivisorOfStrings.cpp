#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int gcd(int n, int m){
        if(n == 0) return m;
        if(m == 0) return n;
        if(n == m) return n;
        if(n>m) return gcd(n-m,m);
        return gcd(n,m-n);
    }

    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1) ? 
                str1.substr(0,gcd(str1.size(),str2.size())) : "";
    }
};