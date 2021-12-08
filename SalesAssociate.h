/** @file SalesAssociate.h

 *  @brief SalesAssociate class is derived from Employee class,
 *	it inherits and has access to fields and functions from Employee class.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */


#pragma once
#include "Employee.h"


// Since the SalesAssociate class is derived from Employee class, 
// it inherits and has access to fields and functions from Employee class.

class SalesAssociate : public Employee {

public:
	// default constructor 
	SalesAssociate() { }

	// Initialization list (constructor) by
	// calling the constructor of base class Employee
	SalesAssociate(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached)
		: Employee{ employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached } { }


	// SalesAssociate class method declarations, definitions in SalesAssociate.cpp file
	void SetNewAccountCommissions();

	void SetUpgradeCommissions();

	void SetAccessoryCommissions();

	void SetTotalCommissions();
};

