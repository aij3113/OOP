#ifndef CLASSTEST_H
#define CLASSTEST_H

class classtest
{       int* marks;
    public:
        classtest();
        classtest(int);
        void print_M();
        classtest operator+(classtest &s1);
        ~classtest();
};

#endif // CLASSTEST_H
