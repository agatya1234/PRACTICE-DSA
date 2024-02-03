class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int>pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int count=0;
        while(pq.size()>1){
            int num1=pq.top();
            pq.pop();
            int num2=pq.top();
            pq.pop();
            if(num1-1>0)pq.push(num1-1);
            if(num2-1>0)pq.push(num2-1);
              count++;
        }
        return count;
    }
};