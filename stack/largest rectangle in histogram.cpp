class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int res = 0;
        int tp, curr;
        int n = heights.size(); // Added to store the size of the vector

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                tp = s.top();
                s.pop();
                curr = heights[tp] * (s.empty() ? i : (i - s.top() - 1));
                res = max(res, curr);
            }
            s.push(i);
        }

        while (!s.empty()) {
            tp = s.top();
            s.pop();
            curr = heights[tp] * (s.empty() ? n : (n - s.top() - 1));
            res = max(res, curr);
        }

        return res;
    }
};
