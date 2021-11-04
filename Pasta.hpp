#ifndef PASTA_H
#define PASTA_H
#include "Food.hpp"

class Pasta: public Food{
    public:
    Pasta() = delete;
    virtual ~Pasta() = default;
    Pasta(std::string eatingTime, std::string difficultyToCook, int boilTime);
    Pasta(const Pasta& otherPasta);
    Pasta(Pasta&& otherPasta) = delete;
    Pasta& operator=(const Pasta& otherPasta);
    Pasta& operator=(Pasta&& otherPasta) = delete;
    void showAttributes() override;

    void setBoilTime(int newBoilTime);
    private:
    int boilTime_;
};

#endif