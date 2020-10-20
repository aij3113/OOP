#include <iostream>
#include<string.h>
#include "person.h"

using namespace std;

int main()
{
    person P1("Ashraful",21,"01553454534");
    P1.print_info();

    teacher T1("NI",27,"0134345345","2211","20-01-2016","Lecturer");
    T1.print_info();

    student S1("Sudipto",21,"01710158323","1803045",3.5);
    S1.print_info();

    person *p;
    p=&S1;
    p->print_info();


    return 0;
}
