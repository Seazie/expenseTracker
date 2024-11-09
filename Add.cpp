#include <iostream>
#include <sstream>
#include "Add.h"

Add::Add() {

}

void Add::addExpense(const std::string& name, float amount, const std::string& date) {
	//printing as placeholder
	std::cout << "Adding Expense - Name: " << name << ", Amount: " << amount << ", Date: " << date << std::endl;

	//logic for saving expense data
	expense newExpense;
	newExpense.name = name;
	newExpense.amount = amount;
	
	//Parse date string "MM-DD-YYYY"
	std::istringstream dateStream(date);
	char delimiter;
	dateStream >> newExpense.date.month >> delimiter >> newExpense.date.day >> delimiter >> newExpense.date.year;

	//test to see if it works
	std::cout << "Expense added - Name: " << newExpense.name
		<< ", Amount: $" << newExpense.amount
		<< ", Date: " << newExpense.date.month << "-" << newExpense.date.day << "-" << newExpense.date.year << std::endl;
	
}
