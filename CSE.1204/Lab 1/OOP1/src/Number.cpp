#include "Number.h"

Number::Number(){x=0;y=0;}
Number::Number(int a,int b){x=a;y=b;}
void Number::Add(){result=x+y;}
void Number::Sub(){result=x-y;}
void Number::Mul(){result=x*y;}
void Number::Div(){result=(float)x/y;}
float Number::get_result(){return result;}



