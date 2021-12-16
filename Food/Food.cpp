#include "Food.hpp"

Food::Food(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook):
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
    }
    return *this;
}

void Food::setEatingTime(std::shared_ptr<const std::string> newEatingTime)
{
    eatingTime_=newEatingTime;
}
void Food::setDifficultyToCook(std::shared_ptr<const std::string> newDifficultyToCook)
{
    difficultyToCook_=newDifficultyToCook;
}

std::shared_ptr<const std::string> Food::getEatingTime()
{
    return eatingTime_;
}
std::shared_ptr<const std::string> Food::getDifficultyToCook()
{
    return difficultyToCook_;
}