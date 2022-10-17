#include "Quote.hpp"

double Quote::net_price(std::size_t n) const
{
    return n * price;
}
Quote::~Quote()
{
    std::cout<<"~Quote()"<<std::endl;
}