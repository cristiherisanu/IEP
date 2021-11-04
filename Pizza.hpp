#ifndef PIZZA_H
#define PIZZA_H
#include "Food.hpp"

class Pizza: public Food{
    public:
    Pizza() = delete;
    virtual ~Pizza() = default;
    Pizza(std::string eatingTime, std::string difficultyToCook, std::string type);
    Pizza(const Pizza& otherPizza);
    Pizza(Pizza&& otherPizza) = delete;
    Pizza& operator=(const Pizza& otherPizza);
    Pizza&& operator=(Pizza&& otherPizza) = delete;
    void showAttributes() override;

    void setType(std::string newType);
    private:
    std::string type_;
};
#endif