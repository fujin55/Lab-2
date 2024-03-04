
#include <iostream>
#include "Book.h"
#include "Library.h"
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
    e.SetAuthor("Madeline Miller");
    cout << "e: " << e << endl;
    e.SetTitle("The Song of Achilles");
    cout << "e: " << e << endl;

    /*Library en;
    cout << "e: " << en << endl;
    
    Library l1 = { {"J.R.R. Tolkien", "The Fellowship of the Ring"},
    {"J.K Rowling", "Harry Potter and the Sorcerer's stone"},
    {"J.R.R. Tolkien", "The Hobbit"} };
    cout << "l1: " << l1 << endl;
    Library l2(2);
    cout << "l2: " << l2 << endl;
    l2[0] = { "Rebecca Yarros", "Fourth Wing" };
    l2[1] = { "Carlos Ruiz Zafon", "Shadow of the wind" };
    cout << "l2: " << l2 << endl;
    e = std::move(l2);
    cout << "e: " << e << " l2: " << l2 << endl;
    l1[0] = std::move(e[1]);
    cout << "l1: " << l1 << " e: " << e << endl*/
}

// chuj

