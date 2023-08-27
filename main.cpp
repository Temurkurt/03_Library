#include <iostream>


using namespace std;

void showMenu(){
    cout << "*****Welcome to library management system*****" << endl;
    cout << "1. Admin Log in" << endl;
    cout << "2. Search in Library" << endl;
    cout << "3.Exit" << endl;
    cout << "**********************************************" << endl;
}

void loginScreen() {
    cout << "******** Login Screen *******" << endl;
    //There are no need for the password in the initial launch.
}

void adminScreen(){
    cout << "*****Welcome to admin panel*****" << endl;
    cout << "1. Add book" << endl;
    cout << "2. Delete book" << endl;
    cout << "3. Update book" << endl;
    cout << "4. Exit" << endl;
    cout << "********************************" << endl;
}

void bookScreen(){
    cout << "*****Welcome to book adding system*****" << endl;
}

int main() {

    int option;
    int entered_id;
    string book_name;
    string book_writer;

    do{
        showMenu();
        cout << "Option: " << endl;
        cin >> option;

    switch(option){
        case 1:loginScreen();
                cout << "Write admin ID: " << endl; // Admin IDs will be given to admins with the launch of app
                cin >> entered_id;
            if (entered_id == 6875){
                adminScreen();
                if (option == 1){
                    bookScreen();
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                }else if(option == 2){
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                }else if(option == 3){
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                }
                else if(option == 4){
                    cout << "Thank you for using our system" << endl;
                }
            }else{
                cout << "Wrong ID" << endl;
            }
                break;
        case 2: // Search in Library
                cout << "Please write the name of the book: " << endl;
                cin >> book_name;
                cout << "Please write the writer of the book: ";
                cin >> book_writer;
                break;
        case 3: // Exit
                cout << "Thank you for using our system" << endl;
                break;
            }

        }while (option != 3);

    return 0;
};