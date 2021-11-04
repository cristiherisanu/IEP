#include "Pasta.hpp"

Pasta::Pasta(std::string eatingTime, std::string difficultyToCook, int boilTime):
Food(eatingTime, difficultyToCook), 
boilTime_(boilTime)
{}

Pasta::Pasta(const Pasta& otherPasta):
Food(otherPasta), 
boilTime_(otherPasta.boilTime_)
{}

Pasta& Pasta::operator=(const Pasta& otherPasta)
{
    if(this != &otherPasta)
    {
        (Food&)(*this) = otherPasta;
        boilTime_=otherPasta.boilTime_;
        return *this;
    }
    return *this;
}

void Pasta::showAttributes(){std::cout<<eatingTime_<<" "<<difficultyToCook_<<" "<<boilTime_<<std::endl;} 

void Pasta::setBoilTime(int newBoilTime)
    {
        boilTime_=newBoilTime;
    }
