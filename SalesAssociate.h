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

	/**
	 * @brief Overwritten function to set sales associate's new account commissions.
	 *
	 * The total new account commission is the number of new accounts
	 * sold times the commission per account depending on goal reached.
	 * If sales associate reached goal 1, commission is $9 per new account.
	 * If sales associate reached goal 2, commission is $7 per new account.
	 *		
	*/
	void NewAccountCommissions() noexcept override {
		constexpr int NEW_ACCT_GOAL_1COMMISSION = 9;
		constexpr int NEW_ACCT_GOAL_2COMMISSION = 7;
		double commision_per_account{};
		if (GetGoalReached() == 1) {
			commision_per_account = NEW_ACCT_GOAL_1COMMISSION;
		}
		else {
			commision_per_account = NEW_ACCT_GOAL_2COMMISSION;
		}
		SetNewAccountCommissions(GetNewAccountsSold() * commision_per_account);
	}

	/**
	* @brief Overwritten function to calculate sales associate's upgrades commissions.
	 *
	 * The total upgrade commission is the number of upgrades sold times $6.
	*/
	void UpgradeCommissions() noexcept override {

		constexpr int UPGRADES_COMMISSION = 6;
		SetUpgradeCommissions(GetUpgradesSold() * UPGRADES_COMMISSION);

	}

	/**
	 * @brief Overwritten function to calculate sales associate's accessory commissions.
	 *
	 * The total accessory commission is the dollar amount sold
	 * times the percentage of commission paid depending on goal reached.
	 * If sales associate reached goal 1, commission is 16% of the dollar amount sold.
	 * If sales associate reached goal 2, commission is 14% of the dollar amount sold.
	 *
	*/
	void AccessoryCommissions() noexcept override {
		constexpr double SIXTEEN_PERCENT = 0.16;
		constexpr double FOURTEEN_PERCENT = 0.14;
		double percentage_of_sales{};
		if (GetGoalReached() == 1) {
			percentage_of_sales = SIXTEEN_PERCENT;
		}
		else {
			percentage_of_sales = FOURTEEN_PERCENT;
		}
		SetAccessoryCommissions(GetAccessoriesSold() * percentage_of_sales);
	}


	/**
	 * @brief calculates total employee's commission.
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
