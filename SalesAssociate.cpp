/** @file SalesAssociate.cpp

 *  @brief LO1a methods from class header file implemented in the cpp file.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */

#include "SalesAssociate.h"


// SalesAssociate class method definitions:


/**
 * @brief Overwritten function to set sales associate's new account commissions.
 *
 * The total new account commission is the number of new accounts
 * sold times the commission per account depending on goal reached.
 * If sales associate reached goal 1, commission is $9 per new account.
 * If sales associate reached goal 2, commission is $7 per new account.
 *
*/
void SalesAssociate::SetNewAccountCommissions() { 
	double commision_per_account{};
	if (m_goal_reached == 1) {
		commision_per_account = 9;
	}
	else {
		commision_per_account = 7;
	}
	m_new_account_commissions = GetNewAccountsSold() * commision_per_account;
}

/**
 * @brief Overwritten function to set sales associate's upgrades commissions.
 *
 * The total upgrade commission is the number of upgrades sold times $6.
*/
void SalesAssociate::SetUpgradeCommissions() {
	m_upgrade_commissions = GetUpgradesSold() * 6;
}

/**
 * @brief Overwritten function to set sales associate's accessory commissions.
 *
 * The total accessory commission is the dollar amount sold
 * times the percentage of commission paid depending on goal reached.
 * If sales associate reached goal 1, commission is 16% of the dollar amount sold.
 * If sales associate reached goal 2, commission is 14% of the dollar amount sold.
 *
*/
void SalesAssociate::SetAccessoryCommissions() {  
	double percentage_of_sales{};
	if (m_goal_reached == 1) {
		percentage_of_sales = 0.16;
	}
	else {
		percentage_of_sales = 0.14;
	}
	m_accessory_commissions = GetAccessoriesSold() * percentage_of_sales;
}


/**
 * @brief Sets total employee's commission.
 *
 * Calls other methods to set commissions from new accounts,
 * upgrades, and accessories sold. Then adds all of them together.
 *
*/
void SalesAssociate::SetTotalCommissions() {
	SetNewAccountCommissions();
	SetUpgradeCommissions();
	SetAccessoryCommissions();
	m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}