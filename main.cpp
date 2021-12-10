/** @file main.cpp

 *  @brief main function of the COP 3003 - Integration Project

 *  @author Diego Grisales

 *  @bug No known bugs.

 */


#include <exception>
#include <limits>
#include "Employee.h"
#include "Manager.h"
#include "SalesAssociate.h"


int main() noexcept {

	std::string employee_name{};
	double new_accounts_sold{};
	double upgrades_sold{};
	double accessories_sold{};
	int goal_reached{};
	int type_of_employee{};
	int loop_decision{};


	do {

		std::cout << "Enter employee name: ";
		std::cin >> employee_name;

		// exception handling to make sure user will enter an integer or a double
		try
		{

			std::cin.exceptions(std::ios_base::failbit);
			std::cout << "Enter number of new accounts sold: ";
			std::cin >> new_accounts_sold;
			std::cout << "Enter number of upgrades sold: ";
			std::cin >> upgrades_sold;
			std::cout << "Enter dollar amount of accessories sold: ";
			std::cin >> accessories_sold;

			std::cout << "Enter sales goal reached (1 or 2): ";
			std::cin >> goal_reached;
			// while loop will run until user enters 1 or 2
			while (goal_reached < 1 || goal_reached > 2) {
				std::cout << "Enter sales goal reached (1 or 2): ";
				std::cin >> goal_reached;
			}

			std::cout << "If employee is a manager enter 1, if employee is a sales associate enter 2: ";
			std::cin >> type_of_employee;
			// while loop will run until user enters 1 or 2
			while (type_of_employee < 1 || type_of_employee > 2) {
				std::cout << "If employee is a manager enter 1, if employee is a sales associate enter 2: ";
				std::cin >> type_of_employee;
			}

		}
		catch (std::exception&)
		{
			std::cerr << "Incorrect data type entered. \n";
			std::cin.clear();
			std::cin.ignore();
		}

		std::cout << "\n";

		if (type_of_employee == 1) {
			// If employee type == 1, instance (object) of Manager class is created
			Manager manager(employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached);
			manager.GetTotalCommissions();
		}
		else if (type_of_employee == 2) {
			// If employee type == 2, instance (object) of SalesAssociate class is created
			SalesAssociate sales_associate(employee_name, new_accounts_sold, upgrades_sold, accessories_sold, goal_reached);
			sales_associate.GetTotalCommissions();
		}

		try
		{
			std::cin.exceptions(std::ios_base::failbit);
			std::cout << "To calculate another employee's commissions enter 1, otherwise enter 2: ";
			std::cin >> loop_decision;
			while (loop_decision < 1 || loop_decision > 2) {
				std::cout << "To calculate another employee's commissions enter 1, otherwise enter 2: ";
				std::cin >> loop_decision;
			}
		}
		catch (...) {
			std::cerr << "Incorrect data entered. Try again. \n";
			std::cin.clear();
			std::cin.ignore();
		}


	} while (loop_decision == 1);

	return 0;
}








// LO3
// In computer science, dynamic dispatch is the process of selecting which implementation of a polymorphic 
// operation(method or function) to call at run time.It is commonly employed in, and considered a prime 
// characteristic of, object - oriented programming(OOP) languages and systems.
// https://en.wikipedia.org/wiki/Dynamic_dispatch


//LO4
// Procedural Oriented Programming:
// Program is divided into parts called functions.
// Object Oriented Programming:
// Program is divided into small parts called objects. 
// Provides data hiding so it's more secure.
// Allows for code reusability


// LO5
// Inheritance: In Inheritance, there is a reuse of function.
// A program having two functions p and q and we can say p is inherited from q if q has some function of p written.

// Subtype : It refers to the compatibility of the interface.
// In this, q is a subtype of p if every function that is used for invoking q can be used for invoking p as well.
// https://stackoverflow.com/questions/23592131/what-is-the-difference-between-subtyping-and-inheritance-in-oo-programming



// resources used:
// https://www.learncpp.com/
// https://www.cplusplus.com/
// https://sites.google.com/site/profvanselow/course/cop-3003/projects-3003
// https://en.cppreference.com/w/
// https://devdocs.io/cpp/
// https://edube.org/ -- (C++ Essentials – Part 2 (Intermediate))
