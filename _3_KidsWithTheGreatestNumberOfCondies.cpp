#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandy = INT_MIN;
        for(int i=0; i<candies.size(); i++){
            if(maxCandy < candies[i]) maxCandy = candies[i];
        }

        vector<bool> result;
        for(int i=0; i<candies.size(); i++){
            if(candies[i]+extraCandies >= maxCandy){
                result.push_back(true);
            }else{
                result.push_back(false);
            }
        }
        return result;
    }
};