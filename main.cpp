#include <iostream>
#include <ctime>
#include "ExpenseTracker.h"

using namespace std;

int main() {
	
	//declarations
        char selection[7];
        time_t timestamp;
	Add add;
        time(&timestamp);

	//welcome text
        cout << ctime(&timestamp) << std::endl;
        cout << "Expense Tracker" << std::endl;
        cout << "What would you like to do?" << std::endl;
        cout << "Add | Update | Delete | View |" << std::endl;
        std::cin >> selection;
        cout << "You have chosen " << selection << ". Is that correct?" << std::endl;
	add.addExpense("Lunch", 12.50, "2024-11-08");


        return 0;
}
