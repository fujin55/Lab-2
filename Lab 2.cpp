
#include <iostream>
#include "Book.h"
using namespace std;

int main()
{
    string a = "Frank Herbert", t = "Dune";
    Book e;
    cout << "e: " << e << endl;
    Book b1 = { a, t };
    cout << "b1: " << b1 << endl;
    Book b2 = {"Danya Kukafka","Notes on an Execution"};
    cout << "b2: " << b2 << endl;
    Book b3 = b1;
    cout << "b3: " << b3 << " b1: " << b1 << endl;
    e = std::move(b2);
    cout << "e: " << e << " b2:" << b2 << endl;
    e.SetAuthor("The Song of Achilles");
    cout << "e: " << e << endl;
    e.SetTitle("Madeline Miller");
    cout << "e: " << e << endl;
}

