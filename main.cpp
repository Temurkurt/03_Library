#include <iostream>
#include <string>
#include <vector>

using namespace std;

void showMenu(){
    cout << "*****Welcome to book management system*****" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Show Books" << endl;
    cout << "3.Exit" << endl;
    cout << "**********************************************" << endl;
}

struct book {
    char name[200]{};
    char writer[20]{};
    int page = 0;
};

int main() {
    vector<book> books;
    int choice;
    int count = 0;
do {
    showMenu();
    cin >> choice;
    if (choice == 1) {
        cout << "How many books do you want to add? ";
        cin >> count;
        book Books[count];

        for (int i = 0; i < count; i++) {
            cout << "Enter book name: ";
            cin >> Books[i].name;
            cout << "Enter book writer: ";
            cin >> Books[i].writer;
            cout << "Enter book page: ";
            cin >> Books[i].page;
            books.push_back(Books[i]);

            cout << "Book added!" << endl;
            if (i == count - 1) {
                cout << "All books added!" << endl;
                break;
            }
        }

    } else if (choice == 2) {
        if (count != 0) {
            for (int i = 0; i < count; i++) {
                cout << "Book name: " << books[i].name << endl;
                cout << "Book writer: " << books[i].writer << endl;
                cout << "Book page: " << books[i].page << endl;
                cout << "--------------------------" << endl;
                if (i == count - 1) {
                    cout << "All books showed!" << endl;
                    break;
                }
            }
        }else {
                    cout << "There is no book!" << endl;
        }
    } else if (choice == 3) {
        cout << "Bye!" << endl;
        break;
    } else {
        cout << "Invalid input!" << endl;
    }
} while (choice != 3);
    return 0;
}