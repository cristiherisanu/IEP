#include "Pizza.hpp"
#include "Pasta.hpp"
#include "Lock.hpp"
#include <string>
#include <thread>

int i=0;
void orderFood()
{
    Lock l;
    i++;
    std::cout<<"Numarul de comenzi pana in momentul de fata : "<<i<<std::endl;
}

int main()
{
    int choice=1, boilTime, boilTimeDefault=10;
    std::string eatingTime, difficultyToCook,type;
    std::shared_ptr<const std::string> seara = std::make_shared<const std::string>("seara");
    std::shared_ptr<const std::string> mediu = std::make_shared<const std::string>("mediu");
    std::shared_ptr<const std::string> margherita = std::make_shared<const std::string>("margherita");
    std::string eatingTimeDefault("seara"), difficultyToCookDefault("mediu"),typeDefault("margherita");
    std::unique_ptr<Food> someFood, someFoodDefault;
        std::cout<<"1-Pizza"<<std::endl<<"2-Pasta"<<std::endl<<"3-Thread Example"<<std::endl;
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
                someFood = std::make_unique<Pizza>(std::make_shared<const std::string>(eatingTime),std::make_shared<const std::string>(difficultyToCook),std::make_shared<const std::string>(type));
                someFoodDefault= std::make_unique<Pizza>(seara,mediu,margherita);
                std::cout<<"pizza with given parameters: ";
                someFood->showAttributes();
                std::cout<<"pizza with default parameters: ";
                someFoodDefault->showAttributes();
                std::cout<<"copy the first one in the second one: ";
                (Pizza&)*someFoodDefault=(Pizza&)*someFood; //copy assignment operator;
                someFoodDefault->showAttributes();
                std::cout<<"copy constructor called with the last values:";
                std::unique_ptr<Food> otherFood = std::make_unique<Pizza>((Pizza&)*someFoodDefault); //copy constructor
                otherFood->showAttributes();
                std::cout<<"trying self assignment of last object: ";
                (Pizza&)*otherFood=(Pizza&)*otherFood;
                otherFood->showAttributes();
                break;
            }
            case 2:
            {
                std::cout<<"Enter eating time: ";
                std::cin>>eatingTime;

                std::cout<<std::endl;

                std::cout<<"Enter the difficulty of cooking: ";
                std::cin>>difficultyToCook;

                std::cout<<std::endl;

                std::cout<<"Enter the boil time: ";
                std::cin>>boilTime;

                std::cout<<std::endl;
                someFood = std::make_unique<Pasta>(std::make_shared<const std::string>(eatingTime),std::make_shared<const std::string>(difficultyToCook),boilTime);
                someFoodDefault= std::make_unique<Pasta>(seara,mediu,boilTimeDefault);
                someFood->showAttributes();
                someFoodDefault->showAttributes();
                //(Pasta&)*someFoodDefault=(Pasta&)*someFood; //copy assignment operator error;
                //someFoodDefault->showAttributes();

                //std::unique_ptr<Food> otherFood = std::make_shared<Pasta>((Pasta&)*someFoodDefault); //copy constructor error
                break;
            }
            case 3:
            {
                std::thread order1(orderFood);
                std::thread order2(orderFood);

                order1.join();
                order2.join();
            }
            default:
            break;
        }



}