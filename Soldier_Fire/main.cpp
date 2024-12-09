#include "Gun.h"
#include "Soldier.h"

void test()
{
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();
}

int main(int argc, char** argv)
{
    test();
    return 0;
}
