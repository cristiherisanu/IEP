#ifndef LOCK_H
#define LOCK_H

#include <iostream>
#include <mutex>

class Lock {
public:
explicit Lock();
Lock(const Lock&) = delete;
Lock& operator=(const Lock&) = delete;
~Lock();
};

#endif