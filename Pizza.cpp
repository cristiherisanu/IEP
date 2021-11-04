#include "Pizza.hpp"

Pizza::Pizza(std::string eatingTime, std::string difficultyToCook, std::string type):
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
        return *this;
    }
    return *this;
}

void Pizza::showAttributes(){std::cout<<eatingTime_<<" "<<difficultyToCook_<<" "<<type_<<std::endl;} 

void Pizza::setType(std::string newType)
    {
        type_=newType;
    }
