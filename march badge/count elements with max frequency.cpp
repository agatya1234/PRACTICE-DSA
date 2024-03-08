class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0;
        unordered_map<int,int>mp;
        int maxfrq=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            maxfrq=max(maxfrq,mp[nums[i]]);
        }
        for (const auto& [key, value] : mp) {
        if (value == maxfrq)
        count += value;
}
        return count;
    }
};