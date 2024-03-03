#include "Book.h"
#include <iostream>
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Book& b) {

	b.Print(os);
	return os;
}

Book::Book() {

}

Book::Book(string a, string t){
	author = a;
	title = t;
}

Book::Book(const Book& other) {
	author = other.author;
	title = other.title;
}

Book::Book(Book&& other) {
	author = other.author; 
	title = other.title; 
	other.author = nullptr; 
	other.title = nullptr;
}

Book& operator=(Book&& right) {
	swap(author, right.author); //swapping data pointers
	swap(title, right.title); //Swapping vector sizes
	return *this;
}

void Book::SetAuthor(string a) {
	this->author = a;
}

void Book::SetTitle(string t) {
	this->title = t;
}

string Book::GetAuthor() const {
	return author;
}

string Book::GetTitle() const {
	return title;
}

void Book::Print(ostream& out) const {
	cout << title << " by " << author << endl;
}

