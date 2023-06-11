class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
    int x = 0;
    for (string op : operations) {
        if (op == "++X") {
            x++;
        } else if (op == "X++") {
            x++;
        } else if (op == "--X") {
            x--;
        } else if (op == "X--") {
            x--;
        }
    }
    return x;

        
    }
};