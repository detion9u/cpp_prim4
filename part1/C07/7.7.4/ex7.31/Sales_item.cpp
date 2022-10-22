//part1:C07:7.7.4:ex7.31:Sales_item.cpp
#include "Sales_item.h"
#include <iostream>

double Sales_item::ave_price() const
{
    // unsigned units_sold;
    // double revenue;
    double sum1 = (double)units_sold - revenue;
    return sum1;
}

void Sales_item::display()
{
    std::cout << isbn << " " << units_sold << " "
      << revenue << std::endl;
}