#include <iostream>
#include "student.h"
#include<string>

using namespace std;

student::student(){
    name='\0';
    roll='\0';
    cgpa='\0';
}

student::student(string a,string b,float c){
    name=a;
    roll=b;
    cgpa=c;
}

void student::get_info(){
    string a;
    string b;
    float c;

    cin>>a>>b>>c;

    name=a;
    roll=b;
    cgpa=c;
}

void sort_students(student a[]){
    student temp;
    int i,j;
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(a[i].cgpa<a[j].cgpa){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void student::show_info(){
    cout<<"\nRoll: "<<roll<<"\t ";
    cout<<"Name: "<<name<<"\t ";
    cout<<"CGPA: "<<cgpa<<endl;
}
