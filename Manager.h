/** @file Manager.h

 *  @brief Manager class is derived from Employee class,
 *	it inherits and has access to fields and functions from Employee class.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */

#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"


class Manager : public Employee {

public:
	/**
	 * @brief Manager default constructor.
	*/
	Manager() noexcept = default;

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


	/**
	* @brief Overwritten function to calculate manager's new account commissions.
	*
	* The total new account commission is the number of new accounts
	* sold times the commission per account depending on goal reached.
	* If manager reached goal 1, commission is $10 per new account.
	* If manager reached goal 2, commission is $8 per new account.
	*
	*/
	void NewAccountCommissions() noexcept override {

		double commission_per_account{};
		constexpr int NEW_ACCT_GOAL_1COMMISSION = 10;
		constexpr int NEW_ACCT_GOAL_2COMMISSION = 8;
		if (GetGoalReached() == 1) {
			commission_per_account = NEW_ACCT_GOAL_1COMMISSION;
		}
		else {
			commission_per_account = NEW_ACCT_GOAL_2COMMISSION;
		}
		SetNewAccountCommissions(GetNewAccountsSold() * commission_per_account);

	}

	/**
	* @brief Overwritten function to set manager's upgrades commissions.
	*
	* The total upgrade commission is the number of upgrades sold times $7.
	*/
	void UpgradeCommissions() noexcept override {
		constexpr int UPGRADES_COMMISSION = 7;
		SetUpgradeCommissions(GetUpgradesSold() * UPGRADES_COMMISSION);
	}

	/**
	* @brief Overwritten function to calculate manager's accessory commissions.
	*
	* The total accessory commission is the dollar amount sold
	* times the percentage of commission paid depending on goal reached.
	* If manager reached goal 1, commission is 18% of the dollar amount sold.
	* If manager reached goal 2, commission is 16% of the dollar amount sold.
	*
	*/
	void AccessoryCommissions() noexcept override {
		constexpr double EIGHTEEN_PERCENT = 0.18;
		constexpr double SIXTEEN_PERCENT = 0.16;
		double percentage_of_sales{};
		if (GetGoalReached() == 1) {
			percentage_of_sales = EIGHTEEN_PERCENT;
		}
		else {
			percentage_of_sales = SIXTEEN_PERCENT;
		}
		SetAccessoryCommissions(GetAccessoriesSold() * percentage_of_sales);
	}

	/**
	* @brief Calculates total employee's commission.
	*
	* Calls other methods to set commissions from new accounts,
	* upgrades, and accessories sold. Then adds all of them together.
	 *
	*/
	void TotalCommissions() noexcept override {
		NewAccountCommissions();
		UpgradeCommissions();
		AccessoryCommissions();
		SetTotalCommissions(GetNewAccountCommissions() + GetUpgradeCommissions() + GetAccessoryCommissions());
	}

};

#endif
