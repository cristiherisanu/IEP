#include "Food.hpp"

Food::Food(std::string eatingTime, std::string difficultyToCook):
eatingTime_(eatingTime), 
difficultyToCook_(difficultyToCook)
{}

Food::Food(const Food& otherFood):
eatingTime_(otherFood.eatingTime_), 
difficultyToCook_(otherFood.difficultyToCook_)
{}

Food& Food::operator=(const Food& otherFood)
{
    if(this != &otherFood)
    {
        eatingTime_=otherFood.eatingTime_;
        difficultyToCook_=otherFood.difficultyToCook_;
        return *this;
    }
    return *this;
}

void Food::setEatingTime(std::string newEatingTime)
{
    eatingTime_=newEatingTime;
}
void Food::setDifficultyToCook(std::string newDifficultyToCook)
{
    difficultyToCook_=newDifficultyToCook;
}

std::string Food::getEatingTime()
{
    return eatingTime_;
}
std::string Food::getDifficultyToCook()
{
    return difficultyToCook_;
}