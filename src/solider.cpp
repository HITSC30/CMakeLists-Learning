#include "solider.h"
solider::solider(std::string name)
{
    this->_name = name;
    this->_ptr_gun = nullptr;
};
solider::~solider()
{
    if (this->_ptr_gun != nullptr)
    {
        delete this->_ptr_gun;
        this->_ptr_gun = nullptr;
        return;
    }
};
void solider::addGun(Gun *ptr_gun)
{
    this->_ptr_gun = ptr_gun;
};
void solider::addBulletToGun(int num)
{
    this->_ptr_gun->addBullet(num);
    std::cout << "THis Gun has " << num << "Bullets." << std::endl;
};
bool solider::fire() 
{
    if (this->_ptr_gun==nullptr)
    {
        std::cout<<"No Gun To Fire"<<std::endl;
        return false;
    }
    return this->_ptr_gun->shoot();
};