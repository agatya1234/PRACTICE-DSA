class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        int left=0;
        int right=n-1;
        int index=-1;
        int mid;
        while(left<=right){
             mid=(left+right)/2;
            if(letters[mid]>target){
                index=mid;
                right=mid-1;
            }
            else 
            left=mid+1;
        }
        if(index==-1)return letters[0];
        return letters[index];
    }
};