class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       unordered_map<int, int> keyMap;
        int count=0;
        for(int i=0; i<nums.size(); i++){
            count+=keyMap[nums[i]];
            keyMap[nums[i]]++;
        }
        return count;        
    }
};