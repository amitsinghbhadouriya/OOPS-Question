#include <iostream> 
using namespace std; 
 
class BankAccount { 
    private: 
        int accountNumber; 
        string accountHolderName; 
        double balance; 
    
    public: 
        BankAccount(int accountNumber, string accountHolderName, double balance) { 
            this->accountNumber = accountNumber; 
            this->accountHolderName = accountHolderName; 
            this->balance = balance; 
        } 

        void displayAccountInfo() { 
            cout << "Account Number: " << accountNumber << endl; 
            cout << "Account Holder: " << accountHolderName << endl; 
            cout << "Balance: $" << balance << endl; 
        } 
    
        void deposit(double amount) { 
            if (amount > 0) { 
                this->balance += amount; 
                cout << "Deposited $" << amount << " successfully." << endl; 
            }  
            else { 
                cout << "Invalid deposit amount." << endl; 
            } 
        }

        void withdraw(double amount) { 
            if (amount > 0 && amount <= this->balance) { 
                this->balance -= amount; 
                cout << "Withdrew $" << amount << " successfully." << endl; 
            }  
            else { 
                cout << "Invalid withdraw amount or insufficient balance." << endl; 
            } 
        } 
}; 
 
int main() { 
    BankAccount account1(82191, "Amit Singh", 10000.0); 
    account1.displayAccountInfo(); 
    cout << endl; 
    account1.deposit(6000); 
    account1.withdraw(2000); 
    cout << endl; 
    account1.displayAccountInfo(); 
    return 0; 
} 