
#include <iostream>
#include <string>
#include <vector>

int main() {

    enum class OrderBookType{bid, ask};
    double price = 5319.450228;
    double amount = 0.00020075;

    //this is the syntax for string and we need to use 
    //the constructor syntax {} to construct a new string
    //of characters.
    //timestamp is the name of the variable
    //the contents of the string is inside the constructor syntax
    // std::string timestamp{"2020/03/17 17:01:24.884492"};
    // std::string product{"BTC/USDT"};
    // //std::string orderType{"bid"};

    
    // OrderBookType orderType = OrderBookType::bid;

//a vector of type doubles called prices
    std::vector<double> prices;
    std::vector<double>amounts;
    std::vector<std::string>timestamps;
    std::vector<std::string>products;
    std::vector<OrderBookType> orderTypes;
    prices.push_back(5000.1);
    amounts.push_back(0.0001);
    products.push_back("BTC/USDT");
    timestamps.push_back("2020/03/17 17:01:24.884492");
    orderTypes.push_back(OrderBookType::bid);

    prices.push_back(500.1);
    amounts.push_back(0.0003);
    products.push_back("BTC/USDT");
    timestamps.push_back("2020/03/17 17:01:24.884492");
    orderTypes.push_back(OrderBookType::ask);

    std::cout<<"price: "<<prices[0]<<std::endl;

}
