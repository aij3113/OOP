#include <iostream>
#include "coord.h"
using namespace std;


coord::coord()
{
    x=0;
    y=0;
    z=0;
}
coord::coord(int a,int b,int c)
{
    x=a;
    y=b;
    z=c;
}
void coord::get(int &i,int &j,int &k)
{
    i=x;
    cout<<i<<endl;
    j=y;
    cout<<j<<endl;
    k=z;
    cout<<k<<endl;
}
coord coord::operator+(coord ob)
{
    coord temp;

    temp.x=x+ob.x;
    temp.y=y+ob.y;
    temp.z=z+ob.z;

    return temp;
}
