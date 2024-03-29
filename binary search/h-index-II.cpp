class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int high = n - 1;
        int low = 0;
        int ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (citations[mid] >= (n - mid)) {
                ans = n - mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
