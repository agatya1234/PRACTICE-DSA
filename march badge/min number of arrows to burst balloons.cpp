class Solution {
    public:
    static bool comp(vector<int>&a,vector<int>&b){//static: This keyword in C++ means that the function comp belongs 
    //to the class itself rather than to instances of the class.
        return a[1]<b[1];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()==0)return 0;
       sort(points.begin(), points.end(), comp);
        int arrow=1;
        int end =points[0][1];
        for(int i=0;i<points.size();i++){
            if(points[i][0]>end){
                arrow++;
                end=points[i][1];
            }
            
        }
        return arrow;
    }
};