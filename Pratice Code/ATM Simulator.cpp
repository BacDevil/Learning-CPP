#include <iostream>
using namespace std;

// Function to display menu
void showMenu() {
    cout << "\n===== ATM Simulator =====\n";
    cout << "1. Check Balance\n";
    cout << "2. Deposit Money\n";
    cout << "3. Withdraw Money\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    double balance = 1000.0; // Initial account balance
    int choice;
    
    do {
        showMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << balance << "\n";
                break;
                
            case 2: {
                double deposit;
                cout << "Enter amount to deposit: $";
                cin >> deposit;
                if (deposit > 0) {
                    balance += deposit;
                    cout << "Deposit successful! New balance: $" << balance << "\n";
                } else {
                    cout << "Invalid amount! Try again.\n";
                }
                break;
            }
            
            case 3: {
                double withdraw;
                cout << "Enter amount to withdraw: $";
                cin >> withdraw;
                if (withdraw > 0 && withdraw <= balance) {
                    balance -= withdraw;
                    cout << "Withdrawal successful! New balance: $" << balance << "\n";
                } else {
                    cout << "Invalid amount or insufficient balance!\n";
                }
                break;
            }
            
            case 4:
                cout << "Thank you for using the ATM. Goodbye!\n";
                break;
                
            default:
                cout << "Invalid choice! Please try again.\n";
        }
        
    } while (choice != 4);

    return 0;
}
