#ifndef CLASSTEST1_H
#define CLASSTEST1_H

class classtest1
{
    private:
        int *marks;
        static int no_of_student;
        static int total_marks;

    public:
        classtest1();
        classtest1(int);
        void show1();
        classtest1 operator+(classtest1&);
        ~classtest1();

};

#endif // CLASSTEST1_H
