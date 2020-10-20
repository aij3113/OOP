#include <iostream>
#include "classtest.h"

using namespace std;

classtest::classtest(){
    marks=new int();
    *marks=0;
}
classtest::classtest(int a){
    marks=new int();
    *marks=a;
}
void classtest::print_M(){
        cout<<"Marks: "<<*marks<<endl;
}
classtest classtest::operator+(classtest& s2){
        int a;
        a=*marks+*s2.marks;
        classtest s0(a);
        return s0;
}
classtest::~classtest(){
    delete(marks);
}
