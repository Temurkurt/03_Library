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

void bookScreen(){
    cout << "*****Welcome to book adding system*****" << endl;
}

int main() {

    int option;
    int entered_id;
    string book_name;

    do{
        showMenu();
        cout << "Option: " << endl;
        cin >> option;

    switch(option){
        case 1:loginScreen();
            cout << "Write admin ID: " << endl; // Admin IDs will be given to admins with the launch of app
            cin >> entered_id;
            if (entered_id == 6875){
                bookScreen();
                cout << "Please write the name of the book: " << endl;
                cin >> book_name;
                cout << "Please write the writer of the book: "
                cin
            }else{}; //Buradan devam

        }while (case !=3);
    };



    return 0;
}
