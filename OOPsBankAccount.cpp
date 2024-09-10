#include <iostream>
using namespace std;

class BankAccount
{
    private: 
    string accountNumber;
    double balance;
    
    public:
    BankAccount(string accNumber, double initalBalance)
    {
        accountNumber = accNumber;
        balance = initalBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited Money: " << amount << endl;
            cout << "Balance: " << balance << endl;
        }
        else 
        {
            cout << "Invalid Input Amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn Money: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
        else 
        {
            cout << "Insufficient Balance. " << endl;
            cout << "Invalid Withdrawal Amount. " << endl;
        }
    }

    double getBalance()
    {
        return balance;
    }

    string getAccountNumber()
    {
        return accountNumber;
    }
};

int main()
{
    string accNumber;
    double initialBalance;
    cout << "Enter Account Number: ";
    cin >> accNumber;
    cout << "Enter Initial balance: ";
    cin >> initialBalance;

    BankAccount account (accNumber, initialBalance);
    cout << "Account Number: " << account.getAccountNumber() << endl;
    cout << "Initial Balance: " << account.getBalance() << endl;

    double depositAmount()
    cout << "Enter Amount TO be Deposited: ";
    cin >> depositAmount;
    account.deposit(depositAmount);

    double withdrawalAmount;
    cout << "Enter Amount To Withdraw: ";
    cin >> withdrawalAmount;
    account.withdraw(withdrawalAmount);

    cout << "Final Balance: " << account.getBalance() << endl;

}

