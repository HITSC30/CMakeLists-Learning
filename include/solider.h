#pragma once
#include"gun.h"
#include<iostream>
class solider
{
private:
    std::string _name;
    Gun* _ptr_gun;
    
public:
    solider(std::string name);
    ~solider();
    void addGun(Gun *ptr_gun);
    void addBulletToGun(int num);
    bool fire();
};


