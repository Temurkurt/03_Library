#include <iostream>
#include <string>
#include "Books.h"

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

    Books book1;
    book1.setBookName("The Lord of the Rings");
    book1.setWriter("J.R.R Tolkien");
    Books book2;
    book2.setBookName("The Hobbit");
    book2.setWriter("J.R.R Tolkien");
    Books book3;
    book3.setBookName("The Silmarillion");
    book3.setWriter("J.R.R Tolkien");
    Books book4;
    book4.setBookName("The Children of Hurin");
    book4.setWriter("J.R.R Tolkien");
    Books book5;
    book5.setBookName("The Fall of Gondolin");
    book5.setWriter("J.R.R Tolkien");
    Books book6;
    book6.setBookName("The Unfinished Tales");
    book6.setWriter("J.R.R Tolkien");
    Books book7;
    book7.setBookName("The History of Middle Earth");
    book7.setWriter("J.R.R Tolkien");
    Books book8;
    book8.setBookName("The Adventures of Tom Bombadil");
    book8.setWriter("J.R.R Tolkien");
    Books book9;
    book9.setBookName("The Road Goes Ever On");
    book9.setWriter("J.R.R Tolkien");
    Books book10;
    book10.setBookName("The Father Christmas Letters");
    book10.setWriter("J.R.R Tolkien");
    Books book11;
    book11.setBookName("The Letters of J.R.R Tolkien");
    book11.setWriter("J.R.R Tolkien");
    Books book12;
    book12.setBookName("The Monsters and the Critics");
    book12.setWriter("J.R.R Tolkien");
    Books book13;
    book13.setBookName("The Story of Kullervo");
    book13.setWriter("J.R.R Tolkien");
    Books book14;
    book14.setBookName("The Lay of Aotrou and Itroun");
    book14.setWriter("J.R.R Tolkien");
    Books book15;
    book15.setBookName("The Fall of Arthur");
    book15.setWriter("J.R.R Tolkien");
    Books book16;
    book16.setBookName("Beowulf: The Monsters and the Critics");
    book16.setWriter("J.R.R Tolkien");
    Books book17;
    book17.setBookName("The Legend of Sigurd and Gudrun");
    book17.setWriter("J.R.R Tolkien");
    Books book18;
    book18.setBookName("The Book of Lost Tales");
    book18.setWriter("J.R.R Tolkien");
    Books book19;
    book19.setBookName("The Book of Lost Tales 2");
    book19.setWriter("J.R.R Tolkien");
    Books book20;
    book20.setBookName("The Lays of Beleriand");
    book20.setWriter("J.R.R Tolkien");

    int option;
    int entered_id;
    string book_name;
    string book_writer;

    do{
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");

    switch(option){
        case 1:loginScreen();
                cout << "Write admin ID: " << endl; // Admin IDs will be given to admins with the launch of app
                cin >> entered_id;
            if (entered_id == 6875){
                adminScreen();
                cout << "Option: " << endl;
                if (option == 1){
                    bookScreen();
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                    system("cls");
                }if(option == 2){
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                    system("cls");
                }if(option == 3){
                    cout << "Please write the name of the book: " << endl;
                    cin >> book_name;
                    cout << "Please write the writer of the book: ";
                    cin >> book_writer;
                    system("cls");
                }
                if(option == 4){
                    cout << "Thank you for using our system" << endl;
                    system("cls");
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
                system("cls");
                break;
        case 3: // Exit
                cout << "Thank you for using our system" << endl;
                system("cls");
                break;
            }

        }while (option != 3);
        system("cls");
        showMenu();

    return 0;
}