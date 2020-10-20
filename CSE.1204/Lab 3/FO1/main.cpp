#include <iostream>
#include "coord.h"
using namespace std;

int main()
{
    coord o1(3,4,5),o2(5,6,7),o3;
    int x,y,z;

    o3=o1+o2;

    o3.get(x,y,z);

    return 0;
}
