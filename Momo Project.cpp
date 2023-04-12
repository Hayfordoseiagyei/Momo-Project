
#include <iostream>
#include <string>

using namespace std;

int main() {
 const   int balance = 1000;
    int attempts = 0,input,recipient_number,old_pin,new_pin, pin;
    int c_pin = 0000;
    float amount;
 
    while (true) {
        cout << "Welcome to Mobile Money Service"<< endl;
        cout << "Select an option:"<< endl;
        cout << "1. Check Balance"<< endl;
        cout << "2. Transfer Money"<< endl;
        cout << "3. Change Pin"<< endl;
        cout << "4. Exit"<< endl;
        cin >> input;

        if (input == 1) {
            cout << "Enter your pin " << endl;
            cin >> pin;
            
            if ( pin == c_pin ){
            cout << "Your balance is  " << balance<< endl;	
			} 
			else(pin != c_pin );{
			cout << "Incorrect pin" <<endl;
			}
        }
        else if (input == 2) {
            cout << "Enter recipient's phone number: " << endl;
            cin >> recipient_number;

            cout << "Enter amount to send: " << endl;
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient balance" << endl;
            }
             else  ( balance <= amount); {
                cout << "Transfer  " << amount << " to " << recipient_number << endl;
             }
			cout << "Enter your pin"<< endl;
			cin >> pin;
			if (pin == c_pin){
				cout << "Successfully sent " << amount << "\t to \t " << recipient_number << endl;
				cout << "New balance is " << balance - amount << endl;
			}
			 
        }
        else if (input == 3) {
            cout << "Enter old pin: " << endl;
            cin >> old_pin;

            if (old_pin == c_pin) {
                cout << "Enter new pin: " << endl;
                cin >> new_pin;

                c_pin != new_pin;
                cout << "Pin changed successfully" << endl;
            }
            else {
                cout << "Incorrect pin"<< endl;
                attempts++;

                if (attempts == 3) {
                    cout << "Too many attempts. Exiting..." << endl;
                    break;
                }
            }
        }
        else if (input == 4) {
            cout << "Exiting..." << endl;
            break;
        }
        else (input > 4 );{
            cout << "Invalid input" << endl;
        }
    }

    return 0;
}
