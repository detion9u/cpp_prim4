//part1:C07:7.7.4:ex7.31:Sales_item.h
#ifndef SALES_ITEM_H_
#define SALES_ITEM_H_
#include <string>
class Sales_item
{
public:
    Sales_item() : units_sold(0), revenue(0.0) {}
    Sales_item(const std::string isbn, unsigned units_sold, double revenue)
    : isbn(isbn), units_sold(units_sold), revenue(revenue) {}
    ~Sales_item(){}
    double ave_price() const;
    bool same_isbn(const Sales_item &rhs) const
    { return isbn == rhs.isbn; }
    void display();
private:
    std::string isbn;
    unsigned units_sold;
    double revenue;
};
#endif