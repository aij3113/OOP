#ifndef PERSON_H
#define PERSON_H

class student;
class teacher;

class person
{
    private:
        char name[25];
        int age;
    protected:
        char mobile_no[25];
    public:
        person(char a[],int b,char c[]);
        virtual void print_info();

};

class teacher:private person{
    private:
        char teacher_id[25];
        char joining_date[25];
        char designation[25];
    public:
        teacher(char a[],int b,char c[],char d[],char e[],char f[]);
        void print_info();
};

class student:public person{
    private:
        char roll[25];
        float cgpa;
    public:
        student(char a[],int b,char c[],char d[],float e);
        void print_info();
};

#endif // PERSON_H
