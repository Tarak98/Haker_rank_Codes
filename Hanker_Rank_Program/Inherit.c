#include <iostream>
#include <string>

using namespace std;


class PMFund {
protected:
    double fundAmount;

public:
    PMFund(double amount) : fundAmount(amount) {}

    double getFundAmount() const {
        return fundAmount;
    }
};


class Bank : public PMFund {
protected:
    double bankBalance;

public:
    Bank(double fundAmount, double balance) : PMFund(fundAmount), bankBalance(balance) {}

    double getTotalBalance() const {
        return getFundAmount() + bankBalance;
    }
};


class Customer : public Bank {
private:
    string customerName;

public:
    Customer(double fundAmount, double bankBalance, const string& name) : Bank(fundAmount, bankBalance), customerName(name) {}

    void displayTotalBalance() const {
        cout << "Customer Name: " << customerName << endl;
        cout << "Total Balance Amount: " << getTotalBalance() << endl;
    }
};

int main() {
    Customer customer(1000.0, 5000.0, "John Doe");
    customer.displayTotalBalance();

    return 0;
}