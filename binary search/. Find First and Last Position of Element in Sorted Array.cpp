class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int r = lower_bound(nums.begin(), nums.end(), target + 1) - nums.begin();
        if (l == r) return {-1, -1};
        return {l, r - 1};
    }
};
//lower_bound is use in place of binary serach (in we want to find any number in sorted arrya we use lowerbound).
//if we use lower bound and we find some element then it will return that value or if it is not prestent then it will return next number of it or upper bound.
//eg ar=[4,5,5,7,8];
//if we find 6 then it will return 7 because 6 is not present and uppper bound of 6 is 7 .