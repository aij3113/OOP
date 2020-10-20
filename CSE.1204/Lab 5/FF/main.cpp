#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    circle A(5.0);
    print_c(A);
    square B(10.0);
    print_s(B);
    print_ta(A,B);
    B.trfc(A,B);
    print_c(A);
    print_s(B);
    print_ta(A,B);

    return 0;
}

