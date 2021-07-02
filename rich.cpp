class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0, wealth = 0;
        
        for (int i = 0; i < accounts.size(); i++)
        {
            wealth = 0;
            for (int j = 0; j < accounts[0].size(); j++)
            {
                wealth += accounts[i][j];
            }
            max_wealth = max(max_wealth, wealth);
        }
        
        return max_wealth;
    }
};