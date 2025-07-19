#include<iostream>
using namespace std;
class account {
private:
    string name;
    long long int accno;
   
public:
    void getaccountdetails() {
        cout<<"\nEnter the name : ";
        cin.ignore();
        getline(cin,name);
        cout<<"\n Enter The Account Number : ";
        cin>>accno;
       
        
     
 
    }
    void display() {
        cout<<"\nName : "<<name;
        cout<<"\n Account number : "<<accno;
       
    }
};
class current_account : public account
{
private :
    float balance =0;
public :
    void c_display() {
        cout<<"\n Balance : "<<balance;
    }
    void c_deposit() {
        float deposit;
        cout<<"\n Enter deposit amount : ";
        cin>>deposit;
        balance = balance + deposit;
        cout<<"\n balance after deposit : "<<balance;
    }
    void c_withdraw() {
        float withdraw;
        cout<<"\nBalance : "<<balance;
        cout<<"\nEnter withdraw amount: ";
        cin>>withdraw;
        if(balance-withdraw>=1000)
        {
            balance = balance - withdraw;
            cout<<"\n remaining balance : "<<balance;
        }
        else {
            cout<<"\ninsufficient balance : ";
        }
    }
};
class saving_account : public account {
private :
    float s_balance=0;
public:
    void s_display() {
        cout<<"\nBalance: "<<s_balance;
    }
    void s_deposit() {
        float s_deposit,interest;
        cout<<"\nEnter deposit amount : ";
        cin>>s_deposit;
        s_balance = s_balance+s_deposit;
        interest = (s_balance*2)/100;
        s_balance = s_balance+interest;
        cout<<"balance after deposit with interest : "<<s_balance;
    }
    void s_withdraw() {
        float s_withdraw;
        cout<<"\nbalance : "<<s_balance;
        cout<<"\nEnter withdraw amount : ";
        cin>>s_withdraw;
        if(s_balance>s_withdraw) {
            s_balance = s_balance - s_withdraw;
            cout<<"\nbalance : "<<s_balance;
        }
        else {
            cout<<"\ninsufficient balance "<<endl;
        }

    }
};

int main()
{
    current_account c;
    saving_account s;
    char type;
    cout<<"\nEnter s for saving account and c for current account : ";
    cin>>type;
    int choice;
    if(type == 's' || type == 'S') {

        s.getaccountdetails();
        while(1) {
            cout<<"\n------------------------------------"<<endl;
            cout<<"\n1)deposit"<<endl;
            cout<<"2)withdraw"<<endl;
            cout<<"3)balance "<<endl;
            cout<<"4)full details"<<endl;
            cout<<"5)Exit "<<endl;
            cout<<"Enter your choice : "<<endl;
            cin>>choice;
            switch(choice) {
            case 1:
                s.s_deposit();
                break;
            case 2:
                s.s_withdraw();
                break;
            case 3:
                s.s_display();
                break;
            case 4:
                s.display();
                s.s_display();
                break;
            case 5:
                goto end;
            default:
                cout<<"\ninvalid choice,";
                break;
            }
        }
    }
    else if(type == 'c' ||type == 'C') {
        c.getaccountdetails();
        while(1) {
            cout<<"\n------------------------------------"<<endl;
            cout<<"\n1)deposit"<<endl;
            cout<<"2)withdraw"<<endl;
            cout<<"3)balance "<<endl;
            cout<<"4)full details"<<endl;
            cout<<"5)Exit "<<endl;
            cout<<"Enter your choice : "<<endl;
            cin>>choice;
            switch(choice) {
            case 1:
                c.c_deposit();
                break;
            case 2:
                c.c_withdraw();
                break;
            case 3:
                c.c_display();
                break;
            case 4:
                c.display();
                c.c_display();
                break;
            case 5:
                goto end;
            default:
                cout<<"\ninvalid choice,";
                break;
            }
        }
    }
    else {
        cout<<"invalid selection"<<endl;
    }
end:
    cout<<"Thank You for Banking with us....."<<endl;
    return 0;
}