//leetcode 01

//two sum simple
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        for(int i =0;i<nums.size();i++){
            for(int j= 0; j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    arr = {i,j};
                    break;
                }
            }
        }
        return arr;
    }
};
