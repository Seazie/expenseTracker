#ifndef ADD_H
#define ADD_H

#include <string>
#include "expense.h"

class Add {
public:
	Add();
	void addExpense(const std::string& name, float amount, const std::string& date);
};

#endif
