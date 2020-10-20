#ifndef USER_H
#define USER_H


class user
{
    char id[12];
    char pass[5];
    long int balance;
    public:
        void reg();
        void login();
        void topup(long int);
        void withdraw(long int);
        void balance_inquiry();



};

#endif // USER_H
