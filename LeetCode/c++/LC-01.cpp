//leetcode 01

//two sum simple
// time complexity O(n^2)
//
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

//using map
// time complexity O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int diff = target - nums[i];
            if(mp.count(diff)){
                ans.push_back(mp[diff]);
                ans.push_back(i);
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
