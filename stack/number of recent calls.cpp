class RecentCounter {
public:
     queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int limit= t-3000;
        q.push(t);
        while(q.front()<limit){
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */