#pragma once
#include "Employee.h"


// Since the Manager class is derived from Employee class, 
// it inherits and has access to fields and functions from Employee class.

class Manager : public Employee {

public:
    //default constructor
    Manager() { }

    // Initialization list (constructor) by
    // calling the constructor of base class Employee
    Manager(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached)
        : Employee { employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached } { }


    // Manager class method declarations, definitions in Manager.cpp
    void SetNewAccountCommissions();

    void SetUpgradeCommissions();

    void SetAccessoryCommissions();

    void SetTotalCommissions();
};


