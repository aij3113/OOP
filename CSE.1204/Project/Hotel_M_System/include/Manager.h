#ifndef MANAGER_H
#define MANAGER_H

class Manager{
    private:
        char M_id[15]="Manager";
        char id[15];
        char pass[20];
    public:
        Manager();
        void M_Login();
        void R_Login();
        friend void Check_all();
        friend void R_Registration();
        friend void M_Pass_Change(char a[],char b[]);
        friend void f_create(char a[],char b[]);
};

#endif // MANAGER_H
