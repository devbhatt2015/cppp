#include <iostream>
using namespace std;
class BankAccount
{
private:
    float balance;

public:
    BankAccount()
    {
        balance = 0.0;
    }
    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(float amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }
    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount acc;
    acc.deposit(1000);
    acc.withdraw(300);
    acc.showBalance();
}

/*
OUTPUT

Deposited: 1000
Withdrawn: 300
Current Balance: 700

*/