/** @file Manager.cpp

 *  @brief LO1a methods from class header file implemented in the cpp file.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */


#include "Manager.h"


// Manager class method definitions:

/**
 * @brief Overwritten function to set manager's new account commissions. 
 * 
 * The total new account commission is the number of new accounts
 * sold times the commission per account depending on goal reached.
 * If manager reached goal 1, commission is $10 per new account.
 * If manager reached goal 2, commission is $8 per new account.
 * 
*/
void Manager::SetNewAccountCommissions() {  
	double commission_per_account{};
	if (m_goal_reached == 1) {
		commission_per_account = 10;
	}
	else {
		commission_per_account = 8;
	}
	m_new_account_commissions = m_new_accounts_sold * commission_per_account;
}

/**
 * @brief Overwritten function to set manager's upgrades commissions. 
 * 
 * The total upgrade commission is the number of upgrades sold times $7.
*/
void Manager::SetUpgradeCommissions() {
	m_upgrade_commissions = m_upgrades_sold * 7;
}

/**
 * @brief Overwritten function to set manager's accessory commissions.
 *
 * The total accessory commission is the dollar amount sold
 * times the percentage of commission paid depending on goal reached.
 * If manager reached goal 1, commission is 18% of the dollar amount sold. 
 * If manager reached goal 2, commission is 16% of the dollar amount sold. 
 *
*/
void Manager::SetAccessoryCommissions() {  
	double percentage_of_sales{};
	if (m_goal_reached == 1) {
		percentage_of_sales = 0.18;
	}
	else {
		percentage_of_sales = 0.16;
	}
	m_accessory_commissions = m_accessories_sold * percentage_of_sales;
}

/**
 * @brief Sets total employee's commission.
 *
 * Calls other methods to set commissions from new accounts,
 * upgrades, and accessories sold. Then adds all of them together.
 *
*/
void Manager::SetTotalCommissions() {
	SetNewAccountCommissions();
	SetUpgradeCommissions();
	SetAccessoryCommissions();
	m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}