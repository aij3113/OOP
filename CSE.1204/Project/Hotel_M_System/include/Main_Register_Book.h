#ifndef MAIN_REGISTER_BOOK_H
#define MAIN_REGISTER_BOOK_H

class Main_Register_Book{
    public:
        char name[30];
        char age[5];
        char occupation[15];
        char address[100];
        char nid[20];
        int days;

        Main_Register_Book();
        void set_all();
        void Check_in();
        void Check_out();
        friend void Check_CI(char a[]);
        friend void Check_CO(char a[]);
        friend void Confirm(char a[],int b);
        friend class Manager;
};

#endif // MAIN_REGISTER_BOOK_H
