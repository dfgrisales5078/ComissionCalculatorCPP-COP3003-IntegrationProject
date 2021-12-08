#include "Employee.h"
#include <string>



// Initialization list constructor definition
Employee::Employee(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached) {
	m_employee_name = employee_name;
	m_new_accounts_sold = new_accounts_sold;
	m_upgrades_sold = upgrades_sold;
	m_accessories_sold = accessories_sold;
	m_goal_reached = goal_reached;
}


//LO1a
// Employee class method definitions
void Employee::SetTotalCommissions() {
	SetNewAccountCommissions();
	SetUpgradeCommissions();
	SetAccessoryCommissions();
	m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}

void Employee::GetTotalCommissions() {
	SetTotalCommissions();

	std::cout << "Commission summary for: " << m_employee_name << std::endl;
	std::cout << "New account commissions: \$" << m_new_account_commissions << std::endl;
	std::cout << "Upgrade commissions: \$" << m_upgrade_commissions << std::endl;
	std::cout << "Accessory commissions: \$" << m_accessory_commissions << std::endl;
	std::cout << "Total commissions: \$" << m_total_commissions << std::endl;
	std::cout << std::endl;
}