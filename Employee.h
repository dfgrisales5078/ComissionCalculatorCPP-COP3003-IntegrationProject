/** @file Employee.h

 *  @brief LO1 Employee is a Base class, Manager and SalesAssociate inherit from it.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */

#pragma once


#include <iostream>
#include <string>


 /**
  * @brief LO2 Employee is Abstract class, it cannot be instantiated since it contains pure virtual functions.
  * @author Diego Grisales
 */
class Employee {
	// LO2a
	// private fields can only be accessed inside of the class
	// protected fields can be accessed in superclass and subclasses (inheritance)

protected:
	// LO6
	std::string m_employee_name{};
	double m_new_accounts_sold{};
	double m_upgrades_sold{};
	double m_accessories_sold{};

	double m_new_account_commissions{};
	double m_upgrade_commissions{};
	double m_accessory_commissions{};
	int m_goal_reached{};

	double m_total_commissions{};

	// Public fields and functions can be accessed inside and outside of the class
public:
	//LO1b
	// default constructor
	Employee() noexcept {}

	//LO1c
	// Initialization list constructor declaration, definition in Employee.cpp file
	Employee(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached);

	// set methods 
	void SetEmployeeName(std::string name) {
		m_employee_name = name;
	}
	void SetNewAccountsSold(int new_accounts) noexcept {
		m_new_accounts_sold = new_accounts;
	}
	void SetUpgradesSold(int upgrades) noexcept {
		m_upgrades_sold = upgrades;
	}
	void SetAccessoriesSold(double accessories) noexcept {
		m_accessories_sold = accessories;
	}
	void SetGoalReached(int goal) noexcept {
		m_goal_reached = goal;
	}

	// Pure virtual methods - methods that exists only to be overwritten
	// Different definitions in Manager and SalesAssociate classes (polymorphism). 
	virtual void SetNewAccountCommissions() = 0;

	virtual void SetUpgradeCommissions() = 0;

	virtual void SetAccessoryCommissions() = 0;


	// function defined in Employee.cpp file
	void SetTotalCommissions();

	// get methods
	std::string GetEmployeeName() {
		return m_employee_name;
	}
	double GetNewAccountsSold() noexcept {
		return m_new_accounts_sold;
	}
	double GetUpgradesSold() noexcept {
		return m_upgrades_sold;
	}
	double GetAccessoriesSold() noexcept {
		return m_accessories_sold;
	}
	int GetGoalReached() noexcept {
		return m_goal_reached;
	}
	double GetNewAccountCommissions() noexcept {
		return m_new_account_commissions;
	}
	double GetUpgradeCommissions() noexcept {
		return m_upgrade_commissions;
	}
	double GetAccessoryCommissions() noexcept {
		return m_accessory_commissions;
	}
	// function defined in Employee.cpp file
	void GetTotalCommissions();

};