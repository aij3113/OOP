#include <iostream>
#include "circle.h"

using namespace std;

circle::circle(float r){
    radious=r;
}

square::square(float s){
    side=s;
}

void square::trfc(circle& ob1,square& ob2){
    cout<<"\n\tTaking Radius from Circle\n"<<endl;
    ob2.side=ob2.side+ob1.radious;
    ob1.radious=0;
}

void print_c(circle& ob){
    ob.area=3.1416*ob.radious*ob.radious;
    cout<<"\t# CIRCLE #"<<endl;
    cout<<"Radious: "<<ob.radious<<endl;
    cout<<"Area: "<<ob.area<<"\n"<<endl;
}

void print_s(square& ob){
    ob.area=ob.side*ob.side;
    cout<<"\t# SQUARE #"<<endl;
    cout<<"Side: "<<ob.side<<endl;
    cout<<"Area: "<<ob.area<<"\n"<<endl;
}

void print_ta(circle& ob1,square& ob2){
    cout<<"\t# Total Area #"<<endl;
    cout<<"Area: "<<ob1.area+ob2.area<<"\n"<<endl;
}
