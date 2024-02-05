class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        sort(potions.begin(),potions.end());
        vector<int>ans;
        for(long long  i=0;i<n;i++){
            int l=0;
            int r=m-1;
            int count=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if( (long long) spells[i]*potions[mid]>=success){
                    count+=r-mid+1;
                    r=mid-1;
                }
                else {
                    l=mid+1;
                }
                
            }
            ans.push_back(count);
        }
        return ans;
    }
};