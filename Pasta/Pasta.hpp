#ifndef PASTA_H
#define PASTA_H
#include "Food.hpp"

class Pasta: public Food{
    public:
    Pasta() = delete;
    virtual ~Pasta() = default;
    Pasta(std::shared_ptr<const std::string> eatingTime, std::shared_ptr<const std::string> difficultyToCook, int boilTime);
    Pasta(const Pasta& otherPasta) = delete;
    Pasta(Pasta&& otherPasta) = delete;
    Pasta& operator=(const Pasta& otherPasta) = delete;
    Pasta& operator=(Pasta&& otherPasta) = delete;
    void showAttributes() const override;

    void setBoilTime(int newBoilTime);
    private:
    int boilTime_;
};

#endif