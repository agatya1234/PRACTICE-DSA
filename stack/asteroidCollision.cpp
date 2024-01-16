class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>st;
       for(auto i:asteroids){
        while(!st.empty() && i<0 && st.top()>0){
            int sum=i+st.top();
            if(sum<0){
                st.pop();
            }
            else if(sum>0){
                i=0;
            }
            else{
                st.pop();
                i=0;
            }
            
        }
        if(i!=0){
                st.push(i);
            }
       }
       int s=st.size();
       vector<int>ans(s);
      int  i=s-1;
       while(!st.empty()){
           ans[i]=st.top();
           st.pop();
           i--;
       }
       return ans;
       

          
    }
};