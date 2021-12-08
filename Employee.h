#pragma once

#include <iostream>
#include <string>

// LO1
// Base class
// LO2
// Employee is Abstract class, it cannot be instantiated since it contains pure virtual functions. 
class Employee {
	// LO2a
	// private fields can only be accessed inside of the class
	// protected fields can be accessed in superclass and subclasses (inheritance)

	// LO6
protected:
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
	Employee() {}
	//LO1c
	// Initialization list constructor declaration, definition in Employee.cpp file
	Employee(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached);

	// set methods 
	void SetEmployeeName(std::string name) {
		m_employee_name = name;
	}
	void SetNewAccountsSold(int new_accounts) {
		m_new_accounts_sold = new_accounts;
	}
	void SetUpgradesSold(int upgrades) {
		m_upgrades_sold = upgrades;
	}
	void SetAccessoriesSold(double accessories) {
		m_accessories_sold = accessories;
	}
	void SetGoalReached(int goal) {
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
	double GetNewAccountsSold() {
		return m_new_accounts_sold;
	}
	double GetUpgradesSold() {
		return m_upgrades_sold;
	}
	double GetAccessoriesSold() {
		return m_accessories_sold;
	}
	int GetGoalReached() {
		return m_goal_reached;
	}
	double GetNewAccountCommissions() {
		return m_new_account_commissions;
	}
	double GetUpgradeCommissions() {
		return m_upgrade_commissions;
	}
	double GetAccessoryCommissions() {
		return m_accessory_commissions;
	}
	// function defined in Employee.cpp file
	void GetTotalCommissions();

};