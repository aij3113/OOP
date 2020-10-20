#include <iostream>
#include "classtest.h"

using namespace std;

int main()
{
    classtest s1(10);
    classtest s2(18);
    classtest s3(1);

    s3=s1+s2;

    s1.print_M();
    s2.print_M();
    s3.print_M();

   /* classtest1 st1(10);
    classtest1 st2(18);
    classtest1 st3(1);

    st3=st1+st2;

    st1.print_M();
    st2.print_M();
    st3.print_M();  */

    return 0;
}
