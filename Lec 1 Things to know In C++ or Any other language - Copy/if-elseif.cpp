#include <iostream>
using namespace std;
//Code Starts Here
class Solution {
public:
    void studentGrade(int marks) {
        if(marks>=90)
        {
            cout<<"Grade A";
        }
        else if(marks>=70)
        {
            cout<<"Grade B";
        }
        else if(marks>=50)
        {
            cout<<"Grade C";
        }else if(marks>=35)
        {
            cout<<"Grade D";
        }
        else{
            cout<<"Fail";
        }

    }//redundant conditons removed
};
// Code Ends Here
int main() {
    Solution sol;
    int marks;
    cin >> marks;
    sol.studentGrade(marks);
    return 0;
}