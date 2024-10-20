#include <iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int bal)
    {
        balance = bal;
    }
    int getBalance()
    {
        return balance;
    }
    int withdraw(int amount)
    {
        if(amount > balance)
        {
            return false;
        }
        balance = balance - amount;
        return true;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }

};
main()
{
    ATM atm(1000);
    int choice, amount, success;
    char op;
    do {
        cout <<"1. View Balance"<<endl;
        cout <<"2. Cash Withdraw"<<endl;
        cout <<"3. Cash Deposit"<<endl;
        cout <<"4. Exit"<<endl;
        cout <<"Enter Your Choice: "<<endl;
        cin>>choice;
        
        switch(choice)
    {
        case 1:
        cout <<"Your Balance: "<<atm.getBalance()<<endl;
        break;

        case 2:
        cout <<"Enter amount to be withdrawn: ";
        cin>>amount;
        success = atm.withdraw(amount);
        if(success){
            cout <<"Withdraw Successful..!"<<endl;
        }
        else{
            cout <<"Insufficient Balance..."<<endl;
        }
        break;

        case 3:
         cout <<"Enter amount to be deposited: ";
        cin>>amount;
        atm.deposit(amount);
        cout<<"Deposit Successful..!"<<endl;
        break;

        case 4:
        cout <<"ThankYou for using ATM"<<endl;
        break;

        default:
        cout<< "Invalid Choice"<<endl;

    }
    cout <<"Do you want to try Another Transaction [Y/n]: ";
    cin>>op;
    }while(op=='Y'|| op=='y');
    
};
