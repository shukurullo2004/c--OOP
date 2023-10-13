#include <iostream>
#include <cstring>

const int ANTIMAXACC = 100;

enum class BankAction {
    MAKE,
    DEPOSIT,
    WITHDRAW,
    INQUIRE,
    EXIT
};

class Account {
private:
    int m_accID;
    int m_balance;
    char *m_cusName;

public:
    Account(int ID, int balance, const char *cname) {
        m_accID = ID;
        m_balance = balance;
        m_cusName = new char[strlen(cname) + 1];
        strcpy(m_cusName, cname);
    }

    ~Account() {
        delete[] m_cusName;
    }

    int GetAccID() {
        return m_accID;
    }

    void Deposit(int money) {
        if (money > 0) {
            m_balance += money;
            std::cout << "Deposited $" << money << " into account #" << m_accID << std::endl;
        } else {
            std::cout << "Invalid deposit amount" << std::endl;
        }
    }

    int Withdraw(int money) {
        if (money > 0 && m_balance >= money) {
            m_balance -= money;
            std::cout << "Withdrawn $" << money << " from account #" << m_accID << std::endl;
            return money;
        } else {
            std::cout << "Invalid withdrawal amount or insufficient funds" << std::endl;
            return 0;
        }
    }

    void ShowAccInfo() {
        std::cout << "Account ID: " << m_accID << std::endl;
        std::cout << "Customer Name: " << m_cusName << std::endl;
        std::cout << "Balance: $" << m_balance << std::endl;
    }
};

Account *accArr[ANTIMAXACC];
int accNum = 0;

void ShowMenu() {
    std::cout << "Bank Menu:" << std::endl;
    std::cout << "1. Make Account" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Show All Account Info" << std::endl;
    std::cout << "5. Exit" << std::endl;
}

int GetAccIdx(int accountID) {
    for (int i = 0; i < accNum; i++) {
        if (accArr[i]->GetAccID() == accountID) {
            return i;
        }
    }
    return -1; // Account not found
}

void MakeAccount() {
    int id, balance;
    char name[100]; // Assuming a maximum name length of 100 characters

    std::cout << "Enter Account ID: ";
    std::cin >> id;

    if (GetAccIdx(id) != -1) {
        std::cout << "An account with the same ID already exists." << std::endl;
        return;
    }

    std::cout << "Enter Initial Balance: ";
    std::cin >> balance;

    std::cin.ignore(); // Clear the newline character in the input buffer

    std::cout << "Enter Customer Name: ";
    std::cin.getline(name, sizeof(name));

    if (accNum < ANTIMAXACC) {
        accArr[accNum] = new Account(id, balance, name);
        accNum++;
        std::cout << "Account created successfully." << std::endl;
    } else {
        std::cout << "Maximum account limit reached. Cannot create more accounts." << std::endl;
    }
}

void DepositMoney() {
    int id, amount;
    std::cout << "Enter Account ID: ";
    std::cin >> id;

    int accIdx = GetAccIdx(id);

    if (accIdx == -1) {
        std::cout << "Account not found." << std::endl;
        return;
    }

    std::cout << "Enter Deposit Amount: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Invalid deposit amount." << std::endl;
        return;
    }

    accArr[accIdx]->Deposit(amount);
}

void WithdrawMoney() {
    int id, amount;
    std::cout << "Enter Account ID: ";
    std::cin >> id;

    int accIdx = GetAccIdx(id);

    if (accIdx == -1) {
        std::cout << "Account not found." << std::endl;
        return;
    }

    std::cout << "Enter Withdrawal Amount: ";
    std::cin >> amount;

    if (amount <= 0) {
        std::cout << "Invalid withdrawal amount." << std::endl;
        return;
    }

    int withdrawnAmount = accArr[accIdx]->Withdraw(amount);
    if (withdrawnAmount > 0) {
        std::cout << "Withdrawal successful. $" << withdrawnAmount << " withdrawn." << std::endl;
    }
}

void ShowAllAccInfo() {
    for (int i = 0; i < accNum; i++) {
        accArr[i]->ShowAccInfo();
        std::cout << "===============================" << std::endl;
    }
}

int main() {
    int choice;

    while (true) {
        ShowMenu();
        std::cout << "Select menu: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline character in the input buffer
        std::cout << std::endl;

        switch (static_cast<BankAction>(choice)) {
            case BankAction::MAKE:
                MakeAccount();
                break;
            case BankAction::DEPOSIT:
                DepositMoney();
                break;
            case BankAction::WITHDRAW:
                WithdrawMoney();
                break;
            case BankAction::INQUIRE:
                ShowAllAccInfo();
                break;
            case BankAction::EXIT:
                for (int i = 0; i < accNum; i++) {
                    delete accArr[i];
                }
                return 0;
            default:
                std::cout << "Illegal selection.." << std::endl;
        }
    }

    return 0;
}
