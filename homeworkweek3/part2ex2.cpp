#include <iostream>
#include <algorithm>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;
public:
    BankAccount(int accountNumber, string accountHolder, double balance) {
        this->accountNumber = accountNumber;
        this->accountHolder = accountHolder;
        this->balance = balance;
    }
    double getBalance() const {
        return balance;
    }
    void display() const {
        cout << "Account Number: " << accountNumber
             << ", Account Holder: " << accountHolder
             << ", Balance: " << balance << endl;
    }
};

bool compareByBalanceDesc(const BankAccount &a, const BankAccount &b) {
    return a.getBalance() > b.getBalance();
}

int main() {
    BankAccount b1(1, "Xiao Chuhe", 10000);
    BankAccount b2(2, "Ye Anshi", 1000);
    BankAccount b3(3, "Lei Wujie", 50);
    BankAccount b4(4, "Tang Lian", 5000);
    BankAccount b5(5, "Sikong Qianlou", 700);

    BankAccount accounts[] = {b1, b2, b3, b4, b5};

    // Sort in descending order by balance
    sort(accounts, accounts + 5, compareByBalanceDesc);

    cout << "Accounts sorted by balance (descending):" << endl;
    for (int i = 0; i < 5; i++) {
        accounts[i].display();
    }

    return 0;
}