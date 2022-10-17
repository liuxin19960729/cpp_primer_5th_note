#include "Quote.hpp"
#include <iostream>

using namespace std;

class Bulk_quote : public Quote
{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;

public:
    Bulk_quote(/* args */);
    virtual double net_price(std::size_t) const override;
    ~Bulk_quote();
};

Bulk_quote::Bulk_quote(/* args */)
{
}

Bulk_quote::~Bulk_quote()
{
}

double Bulk_quote::net_price(std::size_t n) const
{
    cout << "Bulk_quote::net_price(std::size_t n)" << endl;
    return n * price + 200;
}

int main(int argc, char const *argv[])
{

    return 0;
}
