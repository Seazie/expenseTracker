#include <iostream>
#include <ctime>
#include "expense.h"

using namespace std;

int main() {
        char selection[7];
        time_t timestamp;
        time(&timestamp);
        cout << ctime(&timestamp) << std::endl;
        cout << "Expense Tracker" << std::endl;
        cout << "What would you like to do?" << std::endl;
        cout << "Add | Update | Delete | View |" << std::endl;
        std::cin >> selection;
        cout << "You have chosen " << selection << ". Is that correct?" << std::endl;

        return 0;
}
