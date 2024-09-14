class Solution {
public:   
    int hIndex(vector<int>& v) {
        int n = v.size(), ans = 0;
        vector<int> temp(n + 1, 0);

        // Count how many papers have a certain number of citations
        for (int i = 0; i < n; i++) {
            if (v[i] >= n) temp[n]++;
            else temp[v[i]]++;
        }

        // Calculate the h-index
        int totalValue = 0;
        for (int i = n; i >= 0; i--) {
            totalValue += temp[i];
            if (totalValue >= i) return i;
        }

        return 0;
    }
};