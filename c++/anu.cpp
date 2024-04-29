#include <iostream>

class Employee {
public:
  int id;
  std::string name;
  Employee(int id, std::string name) {
    this->id = id;
    this->name = name;
  }
  virtual float sal_process() = 0;
};

class EmpSalary : public Employee {
public:
  float salary;
  EmpSalary(int id, std::string name, float salary) : Employee(id, name) {
    this->salary = salary;
  }
  float sal_process() override { return salary; }
};

class Freelancer : public Employee {
public:
  float rate;
  float hours;
  Freelancer(int id, std::string name, float rate, float hours)
      : Employee(id, name) {
    this->rate = rate;
    this->hours = hours;
  }
  float sal_process() override { return hours * rate; }
};

class Commission : public EmpSalary {
  float commission;

public:
  Commission(int id, std::string name, float salary, float commission)
      : EmpSalary(id, name, salary) {
    this->commission = commission;
  }
  float sal_process() override { return salary + commission; }
};

class PayRoll_Process {
public:
  float sal_process(Employee &emp, Freelancer &f, Commission &c) {
    return emp.sal_process() + f.sal_process() + c.sal_process();
  }
};

int main() {
  EmpSalary emp1(1, "John", 1000);
  Freelancer emp2(2, "Jane", 10, 100);
  Commission emp3(3, "Jim", 1000, 100);
  std::cout << emp1.sal_process() << std::endl;
  std::cout << emp2.sal_process() << std::endl;
  std::cout << emp3.sal_process() << std::endl;
  PayRoll_Process p;
  std::cout << p.sal_process(emp1, emp2, emp3);
}
