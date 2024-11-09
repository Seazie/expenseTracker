#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

struct Date {
        int day;
        int month;
        int year;
};
struct expense {
        std::string name;
        float amount;
        Date date;

};

#endif
