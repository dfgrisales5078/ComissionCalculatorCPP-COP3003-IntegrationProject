/** @file SalesAssociate.h

 *  @brief SalesAssociate class is derived from Employee class,
 *	it inherits and has access to fields and functions from Employee class.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */


#ifndef SALESASSOCIATE_H
#define SALESASSOCIATE_H
#include "Employee.h"


// Since the SalesAssociate class is derived from Employee class, 
// it inherits and has access to fields and functions from Employee class.

class SalesAssociate : public Employee {

public:
	/**
	 * @brief SalesAssociate default constructor.
	*/
	SalesAssociate() noexcept { }

	/**
	 * @brief SalesAssociate Initialization list constructor definition, calls constructor of base class Employee.
	 * @param employee_name - name.
	 * @param new_accounts_sold - new accounts sold.
	 * @param upgrades_sold - upgrades sold.
	 * @param accessories_sold - dollar amount of accessories sold.
	 * @param goal_reached - goal reached (1 or 2).
	*/
	SalesAssociate(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached)
		: Employee{ employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached } { }


	// SalesAssociate class method declarations, definitions in SalesAssociate.cpp file
	void SetNewAccountCommissions();

	void SetUpgradeCommissions();

	void SetAccessoryCommissions();

	void SetTotalCommissions();
};

#endif
