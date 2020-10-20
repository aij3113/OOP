#include <iostream>
#include<string>
#include "student.h"

using namespace std;

int main(){
    int i,j;
    student A[10],temp;

    for(i=0;i<10;i++){
        A[i].get_info();
    }

    sort_students(A);

    for(i=0;i<10;i++){
        A[i].show_info();
    }

    return 0;
}
