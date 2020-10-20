#include<iostream>
#include "classtest1.h"

using namespace std;

int classtest1::no_of_student=0;
int classtest1::total_marks=0;

classtest1::classtest1()
{
    marks=new int();
    *marks=0;
    no_of_student+=1;
    total_marks+=0;
}
classtest1::classtest1(int a)
{
    marks=new int();
    *marks=a;
    no_of_student+=1;
    total_marks+=a;
}
void classtest1::show1(){
    cout<<"  Marks: "<<*marks<<endl;
    cout<<"  Avg Marks: "<<1.0*total_marks/no_of_student<<endl;
}
classtest1 classtest1::operator+(classtest1& st){
    int a;
    a=*marks+*st.marks;
    classtest1 Z(a);
    no_of_student--;
    return Z;
}
classtest1::~classtest1(){
    delete (marks);
}
