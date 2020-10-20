#include <iostream>
#include "classtest.h"

using namespace std;

classtest::classtest()
{
    marks=new int();
    *marks=0;
}
classtest::classtest(int a)
{
    marks=new int();
    *marks=a;
}
void classtest::show(){
    cout<<"  Marks: "<<*marks<<endl;
}
classtest classtest::operator+(classtest& ob){
    int a;
    a=*marks+*ob.marks;
    classtest z(a);
    return z;
}
classtest::~classtest(){
    delete (marks);
}
