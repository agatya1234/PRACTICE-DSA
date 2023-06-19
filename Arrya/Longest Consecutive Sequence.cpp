class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      int ans=0;
      unordered_set<int>seen{nums.begin(),nums.end()};
      for(int num:nums){
          if(seen.count(num-1))
          continue;
          int lenght=1;
          while(seen.count(++num))
          lenght++;
          ans=max(ans,lenght);
      }
      return ans;
      

    }
};