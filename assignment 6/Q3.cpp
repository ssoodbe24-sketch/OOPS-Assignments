#include<iostream>
using namespace std;
class Account {
    const long accNo;   
    long transId;
    string transType;
    double balance;
public:
    Account(long a, double b) : accNo(a) {
        balance = b;
        transId = 0;
        transType = "None";
    }
    long depositAmount(const long to, const long from, const double amount) {
        static long id = 100;   
        if(to == accNo) {
            balance = balance + amount;
            transType = "Credit";
            transId = ++id;
        }
        return transId;
    }
    long creditAmount(const long to, const long from, const double amount) {
        static long id = 200;
        if(from == accNo && balance >= amount) {
            balance = balance - amount;
            transType = "Debit";
            transId = ++id;
        }
        return transId;
    }
    void displayDetails() const {
        cout << "\nAccount No: " << accNo;
        cout << "\nBalance: " << balance;
        cout << "\nTransaction ID: " << transId;
        cout << "\nTransaction Type: " << transType << endl;
    }
};
int main() {
    Account a1(1, 5000);
    Account a2(2, 6000);
    Account a3(3, 7000);
    Account a4(4, 8000);
    Account a5(5, 9000);
    a1.depositAmount(1, 2, 1000);
    a2.creditAmount(1, 2, 500);
    a3.depositAmount(3, 4, 2000);
    a4.creditAmount(3, 4, 1500);
    a5.depositAmount(5, 1, 3000);
    cout << "\n--- Account Details ---";
    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();
    return 0;
}
