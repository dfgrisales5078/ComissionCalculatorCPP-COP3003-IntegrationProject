#include "SalesAssociate.h"



// SalesAssociate class method definitions:

void SalesAssociate::SetNewAccountCommissions() {  // goal 1 = $9, goal 2 = $7 (per phone)
	double commision_per_account{};
	if (m_goal_reached == 1) {
		commision_per_account = 9;
	}
	else {
		commision_per_account = 7;
	}
	m_new_account_commissions = m_new_accounts_sold * commision_per_account;
}

void SalesAssociate::SetUpgradeCommissions() {
	m_upgrade_commissions = m_upgrades_sold * 6;
}
void SalesAssociate::SetAccessoryCommissions() {  // goal 1 = 16%, goal 2 = 14% (of accessory sales)
	double percentage_of_sales{};
	if (m_goal_reached == 1) {
		percentage_of_sales = 0.16;
	}
	else {
		percentage_of_sales = 0.14;
	}
	m_accessory_commissions = m_accessories_sold * percentage_of_sales;
}
void SalesAssociate::SetTotalCommissions() {
	SetNewAccountCommissions();
	SetUpgradeCommissions();
	SetAccessoryCommissions();
	m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}