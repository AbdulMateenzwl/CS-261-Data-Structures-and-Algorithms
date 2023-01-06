#include <vector>
#include <iostream>
using namespace std;

int countStudents(vector<int> &students, vector<int> &sandwiches)
{
    while(sandwiches.size()>0)
    {
        if(students.front()==sandwiches.front())
        {
            students.erase(students.begin());
            sandwiches.erase(sandwiches.begin());
        }
        else
        {
            students.push_back(students.front());
            students.erase(students.begin());
        }
    }
    return students.size();
}
main()
{
    
}
