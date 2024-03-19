class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int num=tasks.size();
        int arr[26]={0};
        for(int i=0;i<num;i++){
            char e=tasks[i];
            arr[e-'A']++;
        }
        int mx=0;
        for(int j=0;j<26;j++){
           mx=max(mx,arr[j]);
        } 
        int count=0;
        for(int j=0;j<26;j++){
         if(arr[j]==mx)
         count++;
        }   
        
        return max((mx-1)*(n+1) +count, num);
        
        }
};