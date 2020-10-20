#ifndef CLASSTEST_H
#define CLASSTEST_H


class classtest
{
    private:
        int *marks;
    public:
        classtest();
        classtest(int);
        void show();
        classtest operator+(classtest&);
        ~classtest();
};

#endif // CLASSTEST_H
