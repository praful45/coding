//leetcode 136. Single Number //

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<nums.size();i++) {
            res = res ^ nums[i]; //XOR
            // res ^= nums[i]; //short form
        }
        return c;
    }
};
