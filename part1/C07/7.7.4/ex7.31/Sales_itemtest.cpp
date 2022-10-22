//part1:C07:7.7.4:ex7.31:Sales_itemtest.cpp
#include <iostream>
#include <string>
#include "Sales_item.h"

int main(void)
{
    Sales_item sale1;
    Sales_item sale2("111", 25, 0.25);

    sale1.display();
    sale2.display();
    return 0;
}