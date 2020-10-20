#include <iostream>
#include "classtest.h"
#include "classtest1.h"

using namespace std;

int main()
{
    cout<<"\n   # Class 1 #\n"<<endl;
    classtest s1(10);
    classtest s2(18);
    classtest s3;

    s3=s1+s2;

    s1.show();
    s2.show();
    s3.show();


    cout<<"\n   # Class 2 #\n"<<endl;
    classtest1 st1(10);
    st1.show1();
    classtest1 st2(18);
    st2.show1();
    classtest1 st3(5);
    st3.show1();
    classtest1 st4;
    st4=st1+st2;
    st4.show1();

    return 0;
}
