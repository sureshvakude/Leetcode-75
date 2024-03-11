#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.empty()) return 0;

        int writeIndex = 0;
        int count = 1;

        for (int i = 1; i <= chars.size(); ++i) {
            if (i == chars.size() || chars[i] != chars[i - 1]) {
                chars[writeIndex++] = chars[i - 1];
                if (count > 1) {
                    string countString = to_string(count);
                    for (char c : countString) {
                        chars[writeIndex++] = c;
                    }
                    count = 1;
                }
            } else {
                ++count;
            }
        }
        
        return writeIndex;
    }
};