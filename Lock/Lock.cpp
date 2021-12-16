#include "Lock.hpp"

std::mutex m;

Lock::Lock()
{
    m.lock();
    std::cout<<"Locked"<<std::endl;
}

Lock::~Lock()
{
    m.unlock();
    std::cout<<"Unlocked"<<std::endl;
}

