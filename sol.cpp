class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int freq[(int)nums.size()+1];
        memset(freq, 0, sizeof(freq));
        vector<int> ans;
        for (int x : nums) {
            freq[x]++;
            if (freq[x] > 1) {
                ans.push_back(x);
            }
        }
        for (int i = 1; i <= (int) nums.size(); i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};
