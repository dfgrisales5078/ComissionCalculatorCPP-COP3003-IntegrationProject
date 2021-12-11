/** @file Employee.h

 *  @brief LO1 Employee is a Base class, Manager and SalesAssociate inherit from it.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

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
	// LO6
private:
	std::string m_employee_name{};
	int m_new_accounts_sold{};
	int m_upgrades_sold{};
	double m_accessories_sold{};
	int m_new_account_commissions{};
	int m_upgrade_commissions{};
	double m_accessory_commissions{};
	int m_goal_reached{};

	double m_total_commissions{};

	// Public fields and functions can be accessed inside and outside of the class.
public:

	/**
	 * @brief LO1b default constructor.
	*/
	Employee() noexcept = default;

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
	void SetGoalReached(int goal_reached) noexcept {
		m_goal_reached = goal_reached;
	}

	/**
	 * @brief public function to set private member m_new_account_commissions outside of the class.
	 * @param new_account_commissions 
	*/
	void SetNewAccountCommissions(int new_account_commissions) noexcept {
		m_new_account_commissions = new_account_commissions;
	}

	/**
	 * @brief public function to set private member m_upgrade_commissions outside of the class.
	 * @param upgrade_commissions 
	 * @return 
	*/
	void SetUpgradeCommissions (int upgrade_commissions) noexcept {
		m_upgrade_commissions = upgrade_commissions;
	}

	/**
	 * @brief public function to set private member m_accessory_commissions outside of the class.
	 * @param accessory_commissions 
	 * @return 
	*/
	void SetAccessoryCommissions(double accessory_commissions) noexcept {
		m_accessory_commissions = accessory_commissions;
	}

	// Pure virtual methods - methods that exists only to be overwritten.
	// Different definitions in Manager and SalesAssociate classes (polymorphism). 

	/**
	 * @brief Calculates new account commissions.
	*/
	virtual void NewAccountCommissions() = 0;

	/**
	 * @brief Calculates commissions on upgrade sales.
	*/
	virtual void UpgradeCommissions() = 0;

	/**
	 * @brief Calculates commisions on accessory sales.
	*/
	virtual void AccessoryCommissions() = 0;

	/**
	 * @brief public function to set private member m_total_commissions outside of the class.
	 * @param total_commissions 
	 * @return 
	*/

	void SetTotalCommissions(double total_commissions) noexcept {
		m_total_commissions = total_commissions;
	}


	/**
	 * @brief Sets total employee's commission. Function defined in Employee.cpp.
	*/
	virtual void TotalCommissions();

	// get methods:

	/**
	 * @brief public function to get employee name.
	 * @return - employee name. 
	*/
	auto GetEmployeeName() {
		return m_employee_name;
	}

	/**
	 * @brief public function to get number of new accounts sold.
	 * @return - number of new accounts sold.
	*/
	auto GetNewAccountsSold() noexcept {
		return m_new_accounts_sold;
	}

	/**
	 * @brief public function to get number of upgrades sold.
	 * @return - number of upgrades sold.
	*/
	auto GetUpgradesSold() noexcept {
		return m_upgrades_sold;
	}

	/**
	 * @brief public function to get total dollar amount of accessories sold.
	 * @return - dollar amount of accessories sold.
	*/
	auto GetAccessoriesSold() noexcept {
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
	int GetNewAccountCommissions() noexcept {
		return m_new_account_commissions;
	}

	/**
	 * @brief public function to get total upgrade commissions. 
	 * @return - total upgrade commissions. 
	*/
	int GetUpgradeCommissions() noexcept {
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


#endif