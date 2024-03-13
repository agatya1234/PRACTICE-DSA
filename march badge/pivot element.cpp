#include <vector>
using namespace std;

class Solution {
public:
    int pivotInteger(int n) {
        vector<int> ans;
        int  totalsum = 0;
        for(int i=0;i<=n;i++){
            ans.push_back(i);
            totalsum+=i;
        }
        int leftsum=0;
        int rightsum=totalsum;
        for(int i=0;i<=n;i++){
            rightsum-=ans[i];
            if(leftsum==rightsum){
                return ans[i];
            }
            leftsum+=ans[i];
        }
        return -1;
    }
};
