#include "Book.h"
#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

//::ostream print operator <<,
ostream& operator<<(ostream& os, const Book& b) {

	b.Print(os);
	return os;
}



//Default constructor
Book::Book() {

}

//Constructor which accepts author and title
Book::Book(const string& a,const string& t){
	(*this).author = a;
	(*this).title = t;
}

Book::Book(string&& a, string&& t)
{
	(*this).author = move(a);
	(*this).title = move(t);
}

//Copy constructor
Book::Book(const Book& other) {
	author = other.author;
	title = other.title;
}

//Move constructor !!!!
Book::Book(Book&& other) noexcept{
	author = other.author; 
	title = other.title; 
	other.author = "";
	other.title = "";
}

//Copy asignment operator
Book& Book::operator=(const Book& other){
	Book c = other;
	swap(author, c.author);
	swap(title, c.title);
	return *this;
}

//Move assignment operator !!!!
Book& Book::operator=(Book&& other)noexcept{
	author = other.author; 
	title = other.title; 
	other.author = "";
	other.title = "";
	return *this;
}


void Book::SetAuthor(const string& a) {
	(*this).author = a;
}

void Book::SetTitle(const string& t) {
	(*this).title = t;
}

void Book::SetAuthor(string&& a) {
	(*this).author = move(a);
}

void Book::SetTitle(string&& t) {
	(*this).title = move(t);

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

Book::~Book() {

}

