class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count=0;
        for(;!students.empty();){
            if(students[0]==sandwiches[0]){
                    students.erase(students.begin());
                    sandwiches.erase(sandwiches.begin());
                    count=0;
                }
                else{
                    count+=1;
                    students.push_back(students[0]);
                    students.erase(students.begin());
                }
                if(count==students.size())
                return count;
            }

            return 0;
    }
};