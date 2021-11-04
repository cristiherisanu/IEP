#include "Pizza.hpp"
#include <string>
#include <memory>


int main()
{
    int choice;
    std::string eatingTime, difficultyToCook,type;
    std::string eatingTimeDefault("seara"), difficultyToCookDefault("mediu"),typeDefault("margherita");
    std::shared_ptr<Food> someFood, someFoodDefault;
    while(1)
    {
        std::cout<<"1-Pizza"<<std::endl<<"2-Pasta"<<std::endl;
        std::cin>>choice;
        switch(choice)
        {
            case 1:
            {
                std::cout<<"Enter eating time: ";
                std::cin>>eatingTime;

                std::cout<<std::endl;

                std::cout<<"Enter the difficulty of cooking: ";
                std::cin>>difficultyToCook;

                std::cout<<std::endl;

                std::cout<<"Enter the pizza type: ";
                std::cin>>type;

                std::cout<<std::endl;
                someFood = std::make_shared<Pizza>(eatingTime,difficultyToCook,type);
                someFoodDefault= std::make_shared<Pizza>(eatingTimeDefault,difficultyToCookDefault,typeDefault);
                someFood->showAttributes();
                someFoodDefault->showAttributes();
                (Pizza&)*someFoodDefault=(Pizza&)*someFood; //copy assignment operator;
                someFoodDefault->showAttributes();

                std::shared_ptr<Food> otherFood = std::make_shared<Pizza>((Pizza&)*someFoodDefault); //copy constructor
                otherFood->showAttributes();
            }
            case 2:
            {

            }
            default:
            break;

        }
    }

}