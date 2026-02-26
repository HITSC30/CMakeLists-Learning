#include"gun.h"
#include"solider.h"
void test01();
int main()
{
    std::cout<<"Its life"<<std::endl;
    test01();
    return 0;
};
void test01()
{
  
    solider sanduo("XuSanDuo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
};