class Solution {
public:
    int bSearch(vector<int>& arr, int key)
    {
        int low = 0, high = arr.size() - 1, mid;
        
        while (low <= high) 
        {
            mid = low + (high - low) / 2;
            if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key)
                return mid;
            else if (key > arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
    
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> s_nums(nums);
        sort(s_nums.begin(), s_nums.end());
        
        for (int i = 0; i < nums.size(); i++)
        {
            int val = bSearch(s_nums, nums[i]); 
            nums[i] = val;
        }
        
        return nums;
    }
};
