#ifndef STACK_H
#define STACK_H


class stack
{
    int i=0;
    int ax[100]={-1};
    public:
        void push(int);
        void pop();
        void show();
};

#endif // STACK_H
