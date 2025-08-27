#include <iostream>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    string accountHolder;
    double balance;

    public:
    BankAccount(int accountNumber, string accountHolder, double balance){
        this -> accountNumber = accountNumber;
        this -> accountHolder = accountHolder;
        this -> balance = balance;
    }
    void display(){
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;          
    }
    void diposit(double amount){
        balance = balance + amount;   
    }
    void withdraw(double amount){
        if( balance > amount){
            balance = balance - amount; 
        }
        else{
            cout << "insufficient balance" << endl;
        }
    }
    double getBalance(){
        return balance;
    }
};

void findRichestAccount( BankAccount b1, BankAccount b2, BankAccount b3){
        BankAccount top = b1;

    if (b2.getBalance() > top.getBalance()) {
        top = b2;
    }
    if (b3.getBalance() > top.getBalance()) {
        top = b3;
    }

    cout << "Top Richest Account is: ";
    top.display();
};

int main(){
    BankAccount b1(1, "Xiao Chuhe", 10000);
    BankAccount b2(2, "Ye Anshi", 1000);
    BankAccount b3(3, "Lei Wujie", 50);

    cout << "====Trio's Bank Account====" << endl;
    b1.display();
    b2.display();
    b3.display();

    b1.diposit(100);
    b2.diposit(10);
    b3.diposit(100);

    b1.withdraw(1000);
    b2.withdraw(100);
    b3.withdraw(55);

    cout << " ====Updated Balances====" << endl;
    b1.display();
    b2.display();
    b3.display();

    findRichestAccount(b1, b2, b3);

    return 0;
}