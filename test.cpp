// Your First C++ Program

#include <iostream>
#include <list.h>

int main() {
    std::cout << "Hello World!\n";
    std::cout << "This is a test c++ program";
    list <string> ls{
        "range","lookup","formula"
    };
    for (list <string> ::iterator i=ls.begin();i!=ls.end(); ++i)
    cout << *i;
    return 0;
}