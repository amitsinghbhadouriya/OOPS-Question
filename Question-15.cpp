#include <iostream>
using namespace std;

class BankAccount {
    private: int accountNumber;
             double balance;

    public: 
        BankAccount(int accNumber, double initialBalance) {
            accountNumber = accNumber;
            balance = initialBalance;
        }

        void deposit(double amount) {
            if(amount > 0) {
                balance += amount;
                cout << "Deposited " << amount << ". New balance: " << balance << endl;
            }
            else {
                cout << "Deposit amount must be positive." << endl;
            }
        }

        void withdraw(double amount) {
            if(amount > 0) {
                if(amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawn " << amount << ". New balance: " << balance << endl;
                }
                else {
                    cout << "Insufficient balance to withdraw " << amount << endl;
                }
            }
            else {
                cout << "Withdrawal amount must be positive." << endl;
            }
        }

        void checkBalance() const {
            cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
        }

        int getAccountNumber() const {
            return accountNumber;
        }
};

int main() {
    BankAccount myAccount(12345, 1000.0);
    myAccount.checkBalance();
    myAccount.deposit(500.0);
    myAccount.withdraw(300.0);
    myAccount.withdraw(1500.0);
    myAccount.checkBalance();
    return 0;
}