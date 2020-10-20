#ifndef USER_H
#define USER_H


class user
{
    char rocket_id[14];
    char pass[10];
    long int balance;
    public:
        user(char[],char[],long int);
        void topup(int);
        void withdraw(int);
        void balance_inquiry();

};

#endif // USER_H
