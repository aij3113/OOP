#ifndef NUMBER_H
#define NUMBER_H


class Number
{
    int x;
    int y;
    float result;
    public:
        Number();
        Number(int,int);
        void Add();
        void Sub();
        void Mul();
        void Div();
        float get_result();

};

#endif // NUMBER_H
