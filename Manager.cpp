#include "Manager.h"



// Manager class method definitions:

void Manager::SetNewAccountCommissions() {  // goal 1 = $10, goal 2 = $8 (per phone)
    double commission_per_account{};
    if (m_goal_reached == 1) {
        commission_per_account = 10;
    }
    else {
        commission_per_account = 8;
    }
    m_new_account_commissions = m_new_accounts_sold * commission_per_account;
}

void Manager::SetUpgradeCommissions() {
    m_upgrade_commissions = m_upgrades_sold * 7;
}

void Manager::SetAccessoryCommissions() {  // goal 1 = 18%, goal 2 = 16% (of accessory sales)
    double percentage_of_sales{};
    if (m_goal_reached == 1) {
        percentage_of_sales = 0.18;
    }
    else {
        percentage_of_sales = 0.16;
    }
    m_accessory_commissions = m_accessories_sold * percentage_of_sales;
}

void Manager::SetTotalCommissions() {
    SetNewAccountCommissions();
    SetUpgradeCommissions();
    SetAccessoryCommissions();
    m_total_commissions = m_new_account_commissions + m_upgrade_commissions + m_accessory_commissions;
}