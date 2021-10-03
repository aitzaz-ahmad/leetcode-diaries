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
private:
    std::unordered_map<int, Employee*> m_idVsEmployee = {};
public:
    int getImportance(vector<Employee*> employees, int id) {

        if(id < 1 || id > 2000)
            throw std::out_of_range("id must be within the range [1, 2000]");

        if(employees.empty() || employees.size() > 2000)
            throw std::length_error("employees.length must be within the range [1, 2000]");

        std::for_each(employees.cbegin(),
                      employees.cend(),
                      [&](const auto employee){
                          if(employee->id < 1 || employee->id > 2000)
                              throw std::out_of_range("employee.id must be within the range [1, 2000]");

                          if(employee->importance < -100 || employee->importance > 100)
                              throw std::out_of_range("employee.importance must be within the range [-100, 100]");

                          if(m_idVsEmployee.find(employee->id) != m_idVsEmployee.cend())
                              throw std::logic_error("employee.id must be unique");

                          m_idVsEmployee[employee->id] = employee;
                      });

        auto boss = m_idVsEmployee[id];
        if(boss == nullptr)
            throw std::logic_error("id is not a valid employee id");

        //now we're certain that the inputs are valid!
        auto importance = 0;
        auto team = std::queue<Employee*> {};
        team.push(boss);

        while(!team.empty()) {
            auto employee = team.front();
            team.pop();

            importance += employee->importance;

            for(auto id: employee->subordinates)
                team.push(m_idVsEmployee[id]);
        }

        return importance;
    }
};
