#ifndef CIRCLE_H
#define CIRCLE_H

class square;

class circle{
    private:
        float radious;
        float area;
    public:
        circle(float);
        friend void print_c(circle&);
        friend void print_ta(circle&,square&);
        friend class square;
};

class square{
    private:
        float side;
        float area;
    public:
        square(float);
        friend void print_s(square&);
        friend void print_ta(circle&,square&);
        void trfc(circle&,square&);
};

#endif // CIRCLE_H

