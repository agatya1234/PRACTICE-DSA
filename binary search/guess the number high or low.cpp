/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int p=1;
        int q=n;
        int mid;
        while(p<=q){
            mid=p+(q-p)/2;
            if(guess(mid)==0)return mid;        
            else if(guess(mid)==-1){
                q=mid-1;
            }
            else{

                p=mid+1;
            }
            
            }
            return mid;
    }
};