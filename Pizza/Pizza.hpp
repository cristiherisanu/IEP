#ifndef PIZZA_H
#define PIZZA_H
#include "Food.hpp"

class Pizza: public Food{
    public:
    Pizza() = delete;
    virtual ~Pizza() = default;
    Pizza(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook, std::shared_ptr<const std::string> type);
    Pizza(const Pizza& otherPizza);
    Pizza(Pizza&& otherPizza) = delete;
    Pizza& operator=(const Pizza& otherPizza);
    Pizza& operator=(Pizza&& otherPizza) = delete;
    void showAttributes() const override;

    void setType(std::shared_ptr<const std::string> newType);
    private:
    std::shared_ptr<const std::string> type_;
};
#endif