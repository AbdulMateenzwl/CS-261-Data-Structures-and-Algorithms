/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int result=0;
        for(auto& a: employees)
        {
            if(a->id==id)
            {
                result=a->importance;
                for(auto& emp:a->subordinates)
                {
                    result+=getImportance(employees,emp);
                }
                return result;
            }
        }
        return result;
    }
};