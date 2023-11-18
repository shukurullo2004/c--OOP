#include <iostream>
using namespace std;
#include <cstring>

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
    
    char* m_cusName;

public:
int m_accID;
    int m_balance;
    Account(){};
    Account(int ID, int balance, char* cname) {
        m_accID = ID;
        m_balance = balance;
        m_cusName = new char[strlen(cname) + 1];
        strcpy(m_cusName, cname);
        
    }
    Account(const Account &other ){
        m_accID = other.m_accID;
        m_balance = other.m_balance;
        m_cusName = new char[strlen(other.m_cusName) + 1];
        strcpy(m_cusName, other.m_cusName);
    }

    ~Account() {
        delete[] m_cusName;
    }

    int GetAccID(void) const{
        return m_accID;
    }

    void Deposit(int money){
        if (money > 0){
        m_balance += money;
        cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << endl; 
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
            cout << "Completed Successfully, remained balace: $" << m_balance << endl;
        }
        else{
            cout << "invalid balance" << endl;
        }
    }

    void ShowAccInfo(void)const {
        std::cout << "Account ID: " << m_accID << std::endl;
        std::cout << "Customer Name: " << m_cusName << std::endl;
        std::cout << "Balance: $" << m_balance << std::endl;
    }
    friend class AccountHandler;
};

class AccountHandler:public Account{
    private:
    Account* accArr[MAX_ACC_NUM];
    int accNum = 0;
    char NAME_L = 30;

    public:
    AccountHandler():Account(){};
    void ShowAllAccInfo(void){
        for(int i = 0; i < accNum; i++){
            accArr[i]->ShowAccInfo();
        }  
    }
      
    void MakeSavingAccount(){
        int id, balance;
        char name[NAME_L];
        cout << "Enter id: " << endl;
        cin >> id;
        cout <<"Enter name: "; cin >> name;
        cout << "Deposit balance: $";
        cin >> balance;
        cout << "Enter interest rate: " << endl;
        cin >> interestRate;
        cout << "Enter special rate: " << endl;
        accArr[accNum++] = new Account(id, balance, name);
        cout <<"Account created " << endl;
    }
    void MakeHighAccount(){
        int id, balance;
        char name[NAME_L];
        cout << "Enter id: " << endl;
        cin >> id;
        cout <<"Enter name: "; cin >> name;
        cout << "Deposit balance: $";
        cin >> balance;
        cout << "Enter interest rate: " << endl;
        cin >> interestRate;
        cout << "Enter special rate: " << endl;
        cin >> specialRate;
        accArr[accNum++] = new Account(id, balance, name);
        cout <<"Account created " << endl;
    }

    void MakeAccount(void) {
    int type;
    cout << "[Select Account Type: ]" << endl;
    cout << "1.Saving Account: \n2.High Credit Account: " <<endl;
    cin >> type;
        switch (type)
        {
        case 1:
            MakeSavingAccount();
            break;
        case 2:
            MakeHighAccount();
            break;
        default:
            cout <<"Enter only 1 and 2 !!!" << endl;
            break;
        }
    }
    virtual void DepositMoney(void){
        int d_money;
        cout << "Enter an amount of money to deposit: $ ";
        cin >> d_money;
        for(int i = 0; i < accNum; i++){
            accArr[i]->Deposit(d_money);
        }
    }
    void WithdrawMoney(void){
        int w_money;
        cout << "Enter an amount of money to withdraw: $";
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
   

    ~AccountHandler() {
    for (int i = 0; i < accNum; i++)
        delete accArr[i];
    }
};
    
class SavingAccount:public Account{
    friend class AccountHandler;
    public:
    int interestRate;
    void Deposit(int money){
        if (money > 0){
        m_balance += money;
        cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << endl; 
        }
        else if(money < 0){
            cout <<"You can not add minus value: " << money << endl; 
        }
        else{
            cout << "Invalid balance" << endl;
        }
}
}; 
class HighCreditAccount:public SavingAccount{
    friend class AccountHandler;
    public:
    int specialRate;
    void Deposit(int money){
        if (money > 0){
        m_balance += money;
        cout << "Completed Successfully, added money: $" << money << " All balance:$ " << m_balance << endl; 
        }
        else if(money < 0){
            cout <<"You can not add minus value: " << money << endl; 
        }
        else{
            cout << "Invalid balance" << endl;
        }
}
};

int main(void) {
    
    AccountHandler manager;
    int choice;
    bool run = true;
    int i;
    while (run){
       

        cout << "\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<" << endl;
        cout << "Select menu: ";
        manager.ShowMenu();
        cin >> choice;
        cout << endl;
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
        cout << "Thank you for using our app!!!";
            run = false;
            break;
        default:
            cout << "Illegal selection..." << endl;
        }
    }
    return 0;
}

