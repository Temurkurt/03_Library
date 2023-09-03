#ifndef INC_03_LIBRARY_BOOKS_H
#define INC_03_LIBRARY_BOOKS_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Books {
private:

    string name;
    string writer;

public:

    void setBookName(string name){
        this->name = name;
    }
    void setWriter(string writer){
        this->writer = writer;
    }
    string getBookName(){
        return name;
    }
    string getWriter(){
        return writer;
    }

};


#endif //INC_03_LIBRARY_BOOKS_H