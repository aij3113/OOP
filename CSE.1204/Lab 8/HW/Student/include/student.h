#ifndef STUDENT_H
#define STUDENT_H
#include<string>

using namespace std;

class student
{
    private:
        string name;
        string roll;
        float cgpa;
    public:
        student();
        student(string,string,float);
        void get_info();
        friend void sort_students(student a[]);
        void show_info();
};

#endif // STUDENT_H
