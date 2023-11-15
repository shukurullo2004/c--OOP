#include <iostream>
using namespace std;

const int MAX_ACC_NUM = 100;

enum BankOption {
    MAKE=1,
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
        m_accID = ID;
        m_balance = balance;
        m_cusName = new char[strlen(cname) + 1];
        strcpy(m_cusName, cname);
        
    }

    ~Account() {
        delete[] m_cusName;
    }

    int GetAccID(void) {
        return m_accID;
    }

    void Deposit(int money){
        if (money > 0){
        m_balance += money;
        cout << "Completed Successfully, added money:  " << money << "All balance: " << m_balance << endl; 
        }
        else if(money < 0){
            cout <<"You can not add minus value: " << money << endl; 
        }
        else{
            cout << "Invalid balance" << endl;
        }
    }

    void Withdraw(int money) {
        if(money > 0 && m_balance >=money){
            m_balance -= money;
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
    Account* accArr[MAX_ACC_NUM];
    int accNum = 0;
    char NAME_L = 30;


    void ShowAllAccInfo(void){
        for(int i = 0; i < accNum; i++){
            accArr[i]->ShowAccInfo();
        }
        
    }

      
    void MakeAccount(void) {

    int id, balance;
    char name[NAME_L];
    cout << "Enter id: " << endl;
    cin >> id;
    cout <<"Enter name: "; cin >> name;
    cout << "Deposit balance: " << endl;
    cin >> balance;
    accArr[accNum++] = new Account(id, balance, name);
    cout <<"Account created " << endl;

    }
    void DepositMoney(void){
        int d_money;
        cout << "Enter an amount of money to deposit: ";
        cin >> d_money;
        for(int i = 0; i < accNum; i++){
            accArr[i]->Deposit(d_money);
        }
    }
    void WithdrawMoney(void){
        int w_money;
        cout << "Enter an amount of money to withdraw: ";
        cin >> w_money;
        for(int i = 0; i < accNum; i++){
            accArr[i]->Withdraw(w_money);
        }
        cout <<"Succesfully completed. " << endl;
        
    }
    void ShowMenu() {
    std::cout << "Bank Menu:" << std::endl;
    std::cout << "1. Make Account" << std::endl;
    std::cout << "2. Deposit Money" << std::endl;
    std::cout << "3. Withdraw Money" << std::endl;
    std::cout << "4. Show All Account Info" << std::endl;
    std::cout << "5. Exit" << std::endl;
    }
   

int main(void) {
    int choice, i;
    while (true) {
        cout << "Select menu: ";
        ShowMenu();
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
