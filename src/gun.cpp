#include"gun.h"
#include<iostream>
Gun::Gun(std::string type)
{
    this->_type=type;
    this->_bullet_count=0;
};
void Gun::addBullet(int bullet_num)
{
    this->_bullet_count=bullet_num;
};
bool Gun::shoot()
{
    if(this->_bullet_count<=0)
    {
        std::cout<<"This Gun has no Bullet"<<std::endl;
        return false;
    }
    this->_bullet_count-=1;
    std::cout<<"Shoot Successfully."<<std::endl;
    return true;
};