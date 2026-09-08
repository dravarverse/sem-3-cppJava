#include <iostream>
#include <string>

class BankAccount {

public:
    int accountNumber;
    double balance;
    BankAccount(){
        std::cout << "Enter Account Number: ";
        std::cin >> balance;
        std::cout << "First Deposit: ";
        std::cin >> balance;
    }

    void transfer(BankAccount &acc, double amount){
        acc.balance += amount;
    }
};

int main() {

    BankAccount acc1, acc2;
    acc1.transfer(acc2, 40.94);
    std::cout << "Amount after transfer: " << acc2.balance << std::endl;

    return 0;
}