#ifndef __QUOTE_H__
#define __QUOTE_H__
#include <iostream>
class Quote
{
private:
    std::string bookNo;
    virtual double net_price(std::size_t) const;

protected:
    double price = 0.0;

public:
    Quote(/* args */) = default;
    //对虚构函数进行动态绑定
    virtual ~Quote();
};

#endif