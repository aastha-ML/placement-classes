class Solution {
public:

vector<int> decode(vector<int>& a, int x) {
    vector<int>ans;
    ans.push_back(x);
    for(int i=0;i<a.size();i++){
        int val=a[i]^x;
        ans.push_back(val);
        x=val;
    }
    return ans;
}
};

