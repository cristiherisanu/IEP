#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <string>
#include <memory>

class Food{
    public:
    Food() = delete;
    virtual ~Food() = default;
    Food(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook);
    Food(const Food& otherFood);
    Food(Food&& otherFood) = delete;

    Food& operator=(const Food& otherFood);
    Food&& operator=(Food&& otherFood) = delete;

    virtual void showAttributes()const = 0;

    void setEatingTime(std::shared_ptr<const std::string> newEatingTime);
    void setDifficultyToCook(std::shared_ptr<const std::string> newDifficultyToCook);

    std::shared_ptr<const std::string> getEatingTime();
    std::shared_ptr<const std::string> getDifficultyToCook();
    protected:
    std::shared_ptr<const std::string> eatingTime_;
    std::shared_ptr<const std::string> difficultyToCook_;
};
#endif