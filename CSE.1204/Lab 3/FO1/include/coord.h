#ifndef COORD_H
#define COORD_H


class coord
{
    int x;
    int y;
    int z;
public:
    coord();
    coord(int,int,int);
    void get(int &i,int &j,int &k);
    coord operator+(coord ob);

};

#endif // COORD_H
