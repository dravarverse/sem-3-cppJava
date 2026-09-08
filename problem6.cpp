#include <iostream>
#include <string>

class Emplopyees {
    
    public:
    std::string name;
    float salary;

    Emplopyees(){
        std::cout << "Employee Name: ";
        getline(std::cin, name);
        std::cout << "Salary: ";
        std::cin >> salary;
    }
};
std::string highestSalary(Emplopyees employee[]){
    float highest = employee[0].salary;
        for (int i = 0; i < sizeof(employee); i++)
        {
            
            if (highest < employee[i].salary)
            {
                highest = employee[i].salary;
            }
        }
        for (int i = 0; i < sizeof(employee); i++)
        {
            if (highest == employee[i].salary)
            {
                return employee[i].name;
                break;
            }
            
        }
    }
float highestSalary(Emplopyees &employee){
    float revisedPay = employee.salary * 0.1;
    employee.salary = revisedPay;
        
    }

int main(){
    Emplopyees e1, e2, e3;
    
    return 0;
}