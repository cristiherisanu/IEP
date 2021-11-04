#ifndef FOOD_H
#define FOOD_H
#include <iostream>
#include <string>

class Food{
    public:
    Food() = delete;
    virtual ~Food() = default;
    Food(std::string eatingTime, std::string difficultyToCook);
    Food(const Food& otherFood);
    Food(Food&& otherFood) = delete;

    Food& operator=(const Food& otherFood);
    Food&& operator=(Food&& otherFood) = delete;

    virtual void showAttributes() = 0;

    void setEatingTime(std::string newEatingTime);
    void setDifficultyToCook(std::string newDifficultyToCook);

    std::string getEatingTime();
    std::string getDifficultyToCook();
    protected:
    std::string eatingTime_;
    std::string difficultyToCook_;
};
#endif