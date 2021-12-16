#include "Pizza.hpp"

Pizza::Pizza(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook, std::shared_ptr<const std::string> type):
Food(eatingTime, difficultyToCook), 
type_(type)
{}

Pizza::Pizza(const Pizza& otherPizza):
Food(otherPizza), 
type_(otherPizza.type_)
{}

Pizza& Pizza::operator=(const Pizza& otherPizza)
{
    if(this != &otherPizza)
    {
        (Food&)(*this) = otherPizza;
        type_=otherPizza.type_;
    }
    else
    {
        std::cout<<"warning: self assignment"<<std::endl;
    }
    return *this;
}

void Pizza::showAttributes()const {std::cout<<*eatingTime_<<" "<<*difficultyToCook_<<" "<<*type_<<std::endl;} 

void Pizza::setType(std::shared_ptr<const std::string> newType)
    {
        type_=newType;
    }
