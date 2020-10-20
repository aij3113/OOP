#include <iostream>
#include "user.h"
#include<string.h>

using namespace std;

user::user(char arr1[],char arr2[],long int a)
    {
        strcpy(rocket_id,arr1);
        strcpy(pass,arr2);
        balance=a;
    }
void user::topup(int a)
    {
        balance=balance+a;
    }
void user::withdraw(int a)
    {
        long int b;
        b=balance-a;
        if(b>=500)
        {
            balance=balance-a;
            cout<<"Withdraw Successful"<<endl;
        }
        else
            cout<<"Insufficient Balance"<<endl;
    }
void user::balance_inquiry()
    {
        cout<<"Rocket ID: "<<rocket_id<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }

