/** @file Manager.h

 *  @brief Manager class is derived from Employee class,
 *	it inherits and has access to fields and functions from Employee class.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */

#pragma once
#include "Employee.h"


class Manager : public Employee {

public:
	/**
	 * @brief Manager default constructor.
	*/
	Manager() noexcept { }

	/**
	 * @brief Manager Initialization list constructor definition, calls constructor of base class Employee.
	 * @param employee_name - name.
	 * @param new_accounts_sold - new accounts sold.
	 * @param upgrades_sold - upgrades sold.
	 * @param accessories_sold - dollar amount of accessories sold.
	 * @param goal_reached - goal reached (1 or 2).
	*/
	Manager(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached)
		: Employee{ employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached } { }


	// Manager class method declarations, definitions in Manager.cpp
	void SetNewAccountCommissions() override;

	void SetUpgradeCommissions() override;

	void SetAccessoryCommissions() override;

	void SetTotalCommissions();
};


