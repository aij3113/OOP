#include <iostream>
#include<string.h>
#include "person.h"

using namespace std;

person::person(char a[],int b,char c[]){
    strcpy(name,a);
    age=b;
    strcpy(mobile_no,c);
}
void person::print_info(){
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Mobile No.: "<<mobile_no<<endl;
}

teacher::teacher(char a[],int b,char c[],char d[],char e[],char f[]):person(a,b,c){
    strcpy(teacher_id,d);
    strcpy(joining_date,e);
    strcpy(designation,f);
}
void teacher::print_info(){
    person::print_info();
    cout<<"Teacher ID: "<<teacher_id<<endl;
    cout<<"Joining Date: "<<joining_date<<endl;
    cout<<"Designation: "<<designation<<endl;
}

student::student(char a[],int b,char c[],char d[],float e):person(a,b,c){
    strcpy(roll,d);
    cgpa=e;
}
void student::print_info(){
    person::print_info();
    cout<<"Roll No.: "<<roll<<endl;
    cout<<"CGPA: "<<cgpa<<endl;
}
