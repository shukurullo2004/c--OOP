#include <iostream>
#include <cstring>
#include <limits>

const int MAX_ACC_NUM = 100;

enum BankOption {
    MAKE = 1,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

class Account {
private:
    char* m_cusName;

public:
    int m_accID;
    int m_balance;

    Account() : m_cusName(nullptr) {}
    Account(int ID, int balance, const char* cname) : m_accID(ID), m_balance(balance) {
        m_cusName = new char[strlen(cname) + 1];
        strcpy(m_cusName, cname);
    }

    Account(const Account& other) : m_accID(other.m_accID), m_balance(other.m_balance) {
        m_cusName = new char[strlen(other.m_cusName) + 1];
        strcpy(m_cusName, other.m_cusName);
    }

    virtual ~Account() {
        delete[] m_cusName;
    }

    int GetAccID() const {
        return m_accID;
    }

    virtual void Deposit(int money) {
        if (money > 0) {
            m_balance += money;
            std::cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << std::endl;
        }
        else {
            std::cout << "Invalid amount" << std::endl;
        }
    }

    void Withdraw(int money) {
    if (money > 0 && m_balance >= money) {
        m_balance -= money;
        std::cout << "Completed Successfully, remaining balance: $" << m_balance << std::endl;
    } else {
        std::cout << "Invalid amount" << std::endl;
    }
}


    void ShowAccInfo() const {
        std::cout << "Account ID: " << m_accID << std::endl;
        std::cout << "Customer Name: " << m_cusName << std::endl;
        std::cout << "Balance: $" << m_balance << std::endl;
    }

    friend class AccountHandler;
};

class SavingAccount : public Account {
public:
    int interestRate;
    SavingAccount(int ID, int balance, const char* cname) : Account(ID, balance, cname) { }

    void Deposit(int money) {
    if (money > 0) {
        m_balance += money;
        std::cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << std::endl;
    } else {
        std::cout << "Invalid amount" << std::endl;
    }
}

};

class HighCreditAccount : public SavingAccount {
public:
    int specialRate;
    HighCreditAccount(int ID, int balance, const char* cname) : SavingAccount(ID, balance, cname) { }

    void Deposit(int money){
        if (money > 0) {
            m_balance += money;
            std::cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << std::endl;
        }
        else {
            std::cout << "Invalid amount" << std::endl;
        }
    }
};

class AccountHandler {
private:
    Account* accArr[MAX_ACC_NUM];
    int accNum = 0;
    static const int NAME_L = 30;

public:
    AccountHandler() {}

    ~AccountHandler() {
        for (int i = 0; i < accNum; i++) {
            delete accArr[i];
        }
    }

    void ShowAllAccInfo(){
        for (int i = 0; i < accNum; i++) {
            accArr[i]->ShowAccInfo();
        }
    }

    void MakeSavingAccount() {
        int id, balance;
        char name[NAME_L];
        std::cout << "Enter id: " << std::endl;
        std::cin >> id;
        std::cout << "Enter name: ";
        std::cin>>name;
        std::cout << "Deposit balance: $";
        std::cin >> balance;

        SavingAccount* savingAcc = new SavingAccount(id,balance, name);
        accArr[accNum++] = savingAcc;
        std::cout << "Saving Account created " << std::endl;
    }

    void MakeHighCreditAccount() {
    int id, balance;
    char name[NAME_L];
    std::cout << "Enter id: " << std::endl;
    std::cin >> id;
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Deposit balance: $";
    std::cin >> balance;

    HighCreditAccount* highCreditAcc = new HighCreditAccount(id, balance, name);

    accArr[accNum++] = highCreditAcc;
    std::cout << "High Credit Account created " << std::endl;
}


    void MakeAccount() {
        int type;
        std::cout << "[Select Account Type: ]" << std::endl;
        std::cout << "1. Saving Account\n2. High Credit Account" << std::endl;
        std::cin >> type;

        switch (type) {
            case 1:
                MakeSavingAccount();
                break;
            case 2:
                MakeHighCreditAccount();
                break;
            default:
                std::cout << "Enter only 1 and 2!!!" << std::endl;
                break;
        }
    }

    void DepositMoney() {
        int d_money;
        std::cout << "Enter an amount of money to deposit: $ ";
        std::cin >> d_money;

        for (int i = 0; i < accNum; i++) {
            accArr[i]->Deposit(d_money);
        }
    }

    void WithdrawMoney() {
        int w_money;
        std::cout << "Enter an amount of money to withdraw: $";
        std::cin >> w_money;

        for (int i = 0; i < accNum; i++) {
            accArr[i]->Withdraw(w_money);
        }

        std::cout << "Successfully completed. " << std::endl;
    }

    void ShowMenu() const {
        std::cout << "Bank Menu:" << std::endl;
        std::cout << "1. Make Account" << std::endl;
        std::cout << "2. Deposit Money" << std::endl;
        std::cout << "3. Withdraw Money" << std::endl;
        std::cout << "4. Show All Account Info" << std::endl;
        std::cout << "5. Exit" << std::endl;
    }
};

int main() {
    AccountHandler manager;
    int choice;
    bool run = true;

    while (run) {
        std::cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << std::endl;
        std::cout << "Select menu: ";
        manager.ShowMenu();
        std::cin >> choice;
        std::cout << std::endl;

        switch (BankOption(choice)) {
            case BankOption::MAKE:
                manager.MakeAccount();
                break;
            case BankOption::DEPOSIT:
                manager.DepositMoney();
                break;
            case BankOption::WITHDRAW:
                manager.WithdrawMoney();
                break;
            case BankOption::INQUIRE:
                manager.ShowAllAccInfo();
                break;
            case BankOption::EXIT:
                std::cout << "Thank you for using our app!!!" << std::endl;
                run = false;
                break;
            default:
                std::cout << "Illegal selection..." << std::endl;
        }
    }

    return 0;
}
