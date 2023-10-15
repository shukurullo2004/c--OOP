#include <iostream>
using namespace std;

const int MAX_ACC_NUM = 100;

enum BankOption {
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
    char* m_cusName;

public:
    Account(int ID, int balance, char* cname) {
        // Implementation required...
        m_accID = ID;
        m_balance = balance;
        m_cusName = new char[strlen(cname)];
        
    }

    ~Account() {
        // Implementation required...
        delete[] m_cusName;
    }

    int GetAccID(void) {
        // Implementation required...
        return m_accID;
    }

    void Deposit(int money) {
        // Implementation required...
        if (money > 0)
        {m_balance = +money;
        cout << "Completed Successfully, added money:  " << money << "All balance: " << m_balance << endl; 
        }
        else{
            cout << "Invalid balance" << endl;
        }
    }

    int Withdraw(int money) {
        // Implementation required...
        if(money > 0 && m_balance >=money){
            m_balance =- money;
            cout << "Completed Successfully, remained balace: " << m_balance << endl;
        }
        else{
            cout << "invalid balance" << endl;
        }
    }

    void ShowAccInfo(void) {
        std::cout << "Account ID: " << m_accID << std::endl;
        std::cout << "Customer Name: " << m_cusName << std::endl;
        std::cout << "Balance: $" << m_balance << std::endl;
    }
    };
    Account* accArr[MAX_ACC_NUM]; // Account array
    int accNum = 0;
    char NAME_L = 30;
    void Showmenu(void){
        cout << "------Menu------" << endl;
        cout << "1.Make deposit" << endl;
        cout <<"2.Deposit" << endl;
        cout << "3.Withdraw" << endl;
        cout <<"4.Show All Account info" << endl;
        cout <<"5.Delete Account" << endl;
        cout <<"6.Show All Account info" <<endl;
        cout << "7.Exit" << endl;
        cout << "Select: "<< endl;
    }

      
    void MakeAccount() {
        // Implementation required...
    int id, balance;
    char name[NAME_L];
    cout << "Enter id: " << endl;
    cin >> id;
    cout <<"Enter balance: "; cin >> id;
    cout <<"Enter name: "; cin >> name;
    cout << "Deposit balance: " << endl;
    cin >> balance;
    accArr[accNum++] = new Account(id, balance, name);
    cout <<"Account created " << endl;
    }
    void WithdrawMoney() {
    
    }

    void ShowAllAccInfo() {
        // Implementation required...
    }

int main(void) {
    int choice, i;
    while (1) {
        cout << "Select menu: ";
        cin >> choice;
        cout << endl;
        switch (BankOption(choice)) {
        case BankOption::MAKE:
          MakeAccount();
            break;
        case BankOption::DEPOSIT:
            DepositMoney();
            break;
        case BankOption::WITHDRAW:
            WithdrawMoney();
            break;
        case BankOption::INQUIRE:
            ShowAllAccInfo();
            break;
        case BankOption::EXIT:
            for (i = 0; i < accNum; i++)
                delete accArr[i];
            return 0;
        default:
            cout << "Illegal selection..." << endl;
        }
    }
    return 0;
}
