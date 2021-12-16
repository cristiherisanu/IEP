#include "Pasta.hpp"

Pasta::Pasta(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook, int boilTime):
Food(eatingTime, difficultyToCook), 
boilTime_(boilTime)
{}

/*Pasta::Pasta(const Pasta& otherPasta):
Food(otherPasta), 
boilTime_(otherPasta.boilTime_)
{}*/

/*Pasta& Pasta::operator=(const Pasta& otherPasta)
{
    if(this != &otherPasta)
    {
        (Food&)(*this) = otherPasta;
        boilTime_=otherPasta.boilTime_;
    }
    return *this;
}*/

void Pasta::showAttributes()const {std::cout<<"Pasta attributes: "<<*eatingTime_<<" "<<*difficultyToCook_<<" "<<boilTime_<<std::endl;} 

void Pasta::setBoilTime(int newBoilTime)
    {
        boilTime_=newBoilTime;
    }
