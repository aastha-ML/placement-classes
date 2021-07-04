class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int total=0;
        for(int i=0;i<n-1;i++){
            int x=min(nums[i],nums[i+1]);
            i++;
            total+=x;
            
        }
        return total;
    }
};