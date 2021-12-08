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
	// private fields can only be accessed inside of the class.
	// protected fields can be accessed in superclass and subclasses (inheritance).

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

	// Public fields and functions can be accessed inside and outside of the class.
public:

	/**
	 * @brief LO1b default constructor.
	*/
	Employee() noexcept {}

	/**
	 * @brief LO1c Initialization list constructor declaration, definition in Employee.cpp file.
	*/
	Employee(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached);

	// set methods:

	/**
	 * @brief sets employee name.
	 * @param name - name of employee.
	 * @return void
	*/
	void SetEmployeeName(std::string name) {
		m_employee_name = name;
	}

	/**
	 * @brief sets the number of new accounts sold by employee.
	 * @param new_accounts - new accounts sold.
	 * @return void
	*/
	void SetNewAccountsSold(int new_accounts) noexcept {
		m_new_accounts_sold = new_accounts;
	}

	/**
	 * @brief sets the number of upgrades sold by employee.
	 * @param upgrades - upgrades sold.
	 * @return void
	*/
	void SetUpgradesSold(int upgrades) noexcept {
		m_upgrades_sold = upgrades;
	}

	/**
	 * @brief sets the number of accessories sold by employee.
	 * @param accessories - accessories sold.
	 * @return void
	*/
	void SetAccessoriesSold(double accessories) noexcept {
		m_accessories_sold = accessories;
	}

	/**
	 * @brief sets the goal reached by employee.
	 * @param goal - goal reached (1 or 2).
	 * @return void
	*/
	void SetGoalReached(int goal) noexcept {
		m_goal_reached = goal;
	}


	// Pure virtual methods - methods that exists only to be overwritten.
	// Different definitions in Manager and SalesAssociate classes (polymorphism). 

	/**
	 * @brief sets commissions on new account sales.
	*/
	virtual void SetNewAccountCommissions() = 0;

	/**
	 * @brief sets commissions on upgrade sales.
	*/
	virtual void SetUpgradeCommissions() = 0;

	/**
	 * @brief sets commisions on accessory sales.
	*/
	virtual void SetAccessoryCommissions() = 0;


	/**
	 * @brief Sets total employee's commission. Function defined in Employee.cpp.
	*/
	void SetTotalCommissions();

	// get methods:

	/**
	 * @brief public function to get employee name.
	 * @return - employee name. 
	*/
	std::string GetEmployeeName() {
		return m_employee_name;
	}

	/**
	 * @brief public function to get number of new accounts sold.
	 * @return - number of new accounts sold.
	*/
	double GetNewAccountsSold() noexcept {
		return m_new_accounts_sold;
	}

	/**
	 * @brief public function to get number of upgrades sold.
	 * @return - number of upgrades sold.
	*/
	double GetUpgradesSold() noexcept {
		return m_upgrades_sold;
	}

	/**
	 * @brief public function to get total dollar amount of accessories sold.
	 * @return - dollar amount of accessories sold.
	*/
	double GetAccessoriesSold() noexcept {
		return m_accessories_sold;
	}

	/**
	 * @brief public function to get the goal reached.
	 * @return - goal reached.
	*/
	int GetGoalReached() noexcept {
		return m_goal_reached;
	}

	/**
	 * @brief public function to get total new account commissions. 
	 * @return - total new account commissions.
	*/
	double GetNewAccountCommissions() noexcept {
		return m_new_account_commissions;
	}

	/**
	 * @brief public function to get total upgrade commissions. 
	 * @return - total upgrade commissions. 
	*/
	double GetUpgradeCommissions() noexcept {
		return m_upgrade_commissions;
	}

	/**
	 * @brief public function to get total accessory commissions. 
	 * @return total accessory commissions. 
	*/
	double GetAccessoryCommissions() noexcept {
		return m_accessory_commissions;
	}
	

	/**
	 * @brief public function to get total employee commissions.
	 * function defined in Employee.cpp file.
	*/
	void GetTotalCommissions();

};