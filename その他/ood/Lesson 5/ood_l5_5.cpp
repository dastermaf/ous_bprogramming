#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
    string name;

public:
    Employee(const string& n) {
        name = n;
    }

    void showInfo() const {
        cout << name << endl;
    }
};

class Department {
    string name;

public:
    vector<Employee> employees;

    Department(const string& n) {
        name = n;
    }

    void showInfo() const {
        cout << name << endl;
    }
};

class Company {
    string name;

public:
    vector<Department> departments;
    vector<Employee> employees;

    Company(const string& n) {
        name = n;
    }

    void addEmployee(const Employee& e) {
        employees.push_back(e);
    }

    void addDepartment(const Department& d) {
        departments.push_back(d);
    }
};

int main() {
    Company company("StarkIndustries");

    company.addDepartment(Department("Engineering"));
    company.addEmployee(Employee("Tony"));

    for (const Department& d : company.departments) {
        d.showInfo();
    }

    for (const Employee& e : company.employees) {
        e.showInfo();
    }

    return 0;
}