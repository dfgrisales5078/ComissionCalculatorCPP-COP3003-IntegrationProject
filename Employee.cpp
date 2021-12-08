/** @file Employee.cpp

 *  @brief LO1a Constructors, and methods from the class header file implemented in the cpp file.

 *  @author Diego Grisales

 *  @bug No known bugs.

 */


#include "Employee.h"
#include <string>

/**
 * @brief Initialization list constructor definition.
 * @param employee_name - name.
 * @param new_accounts_sold - new accounts sold.
 * @param upgrades_sold - upgrades sold.
 * @param accessories_sold - dollar amount of accessories sold.
 * @param goal_reached - goal reached (1 or 2).
*/
Employee::Employee(std::string employee_name, int new_accounts_sold, int upgrades_sold, double accessories_sold, int goal_reached) {
	m_employee_name = employee_name;
	m_new_accounts_sold = new_accounts_sold;
	m_upgrades_sold = upgrades_sold;
	m_accessories_sold = accessories_sold;
	m_goal_reached = goal_reached;
}



// Employee class method definitions:

/**
 * @brief Sets total employee's commission.
 * 
 * Calls other methods to set commissions from new accounts, 
 * upgrades, and accessories sold. Then adds all of them together. 
 * 
*/
void Employee::SetTotalCommissions() {
	SetNewAccountCommissions();
	SetUpgradeCommissions();
	SetAccessoryCommissions();
	m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}


/**
 * @brief Gets employee's total commissions.
 * 
 * Calls the SetTotalCommissions method, then prints 
 * detailed summary of the commissions for the employee. 
 * 
*/
void Employee::GetTotalCommissions() {
	SetTotalCommissions();

	std::cout << "Commission summary for: " << m_employee_name << std::endl;
	std::cout << "New account commissions: " << m_new_account_commissions << std::endl;
	std::cout << "Upgrade commissions: " << m_upgrade_commissions << std::endl;
	std::cout << "Accessory commissions: " << m_accessory_commissions << std::endl;
	std::cout << "Total commissions: " << m_total_commissions << std::endl;
	std::cout << std::endl;
}