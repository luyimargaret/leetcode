#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        unordered_map up<int,bool>;
        for(auto e:nums)
        {
            if(up[e]) return e;
            up[e] = true;
        }
        return -1;
    }
};