#include<iostream>
using namespace std;

// Class representing a simple banking system
class banking_system{
    private:
        int original_pin = 2748;   // Predefined PIN for authentication
        int balance = 78611;      // Initial account balance
        int amount_W, amount_D, entered_pin; // Variables for withdrawal, deposit, and PIN input
    public:
        void check_balance(); // Function to check account balance
        void deposit();       // Function to deposit money
        void withdraw();      // Function to withdraw money
} obj;

/*
 Function: check_balance()
 Purpose : Verifies the entered PIN and displays the account balance
*/
void banking_system::check_balance(){
    cout << "please enter you PIN : ";
    cin >> entered_pin;
    if(entered_pin == original_pin){
        cout << "Available Balance : " << balance;
    }
    else{
        cout << "incorrect pin !!!";
    }
}

/*
 Function: deposit()
 Purpose : Takes deposit amount from user and adds it to account balance
 Note    : No PIN verification is done here
*/
void banking_system::deposit(){
    cout << "please enter the amount to be deposited : ";
    cin >> amount_D;
    balance = balance + amount_D; // Update balance
    cout << "your transaction has been completed successfully ...!!!";
}

/*
 Function: withdraw()
 Purpose : Allows user to withdraw money after verifying PIN
           Also checks if sufficient balance is available
*/
void banking_system::withdraw(){
    cout << "please enter the amount you want to withdraw : ";
    cin >> amount_W;
    cout << "please enter you PIN : ";
    cin >> entered_pin;
    if(entered_pin == original_pin){
        if(amount_W > balance){
            cout << "insufficient balance....";
        }
        else{
            balance = balance - amount_W; // Deduct amount
            cout << "your transaction has been completed successfully ...!!!";
        }
    }
    else{
        cout << "incorrect pin !!!";
    }
}

/*
 Function: main()
 Purpose : Provides menu-driven interface to access banking operations
*/
int main(){
    int choice;
    while(1){
        cout << "\n\n~~~~~ Welcome to our Bank service ~~~~~\n";
        cout << "\n -> please enter your choice :\n";
        cout << " 1. Check Balance \n 2. Deposit \n 3. Withdraw \n 4. Exit the service \n \n";
        cin >> choice;
        switch(choice){
            case 1:
                obj.check_balance(); // Call balance check
                break;
            case 2:
                obj.deposit(); // Call deposit function
                break;
            case 3:
                obj.withdraw(); // Call withdraw function
                break;
            case 4:
                cout << "exiting.........";
                return 0;
            default:
                cout << "please enter a valid choice";
                break;
        }
    }
    return 0;
}