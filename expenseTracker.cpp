#include <iostream>
#include <ctime>

struct expense {
	std::string name;
	float amount;


int main() {
	char selection[7];
	time_t timestamp;
	time(&timestamp);
	cout << ctime(&timestamp) << std::endl;
	std::cout << "Expense Tracker" << std::endl;
	std::cout << "What would you like to do?" << std::endl;
	std::cout << "Add | Update | Delete | View |" << std::endl;
	std::cin >> selection;
	std::cout << "You have chosen " << selection << ". Is that correct?" << std::endl;
	
	return 0;
}
