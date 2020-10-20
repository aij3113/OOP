#include <iostream>
#include "Number.h"

using namespace std;

int main()
{
     Number N(20,40);
     N.Add();
     cout<<N.get_result()<<endl;
     N.Sub();
     cout<<N.get_result()<<endl;
     N.Mul();
     cout<<N.get_result()<<endl;
     N.Div();
     cout<<N.get_result()<<endl;


     return 0;
}
