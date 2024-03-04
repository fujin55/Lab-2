#pragma once
#include <string>
using namespace std;

class Book{
	string author, title;
	
public:
	friend ostream& operator<<(ostream& os, const Book& b);
	Book();
	Book(const string& a, const string& t);
	Book(string&& a, string&& t);
	Book(const Book& other);
	Book(Book&& other) noexcept;
	Book& operator=(const Book& other);
	Book& operator=(Book&& other) noexcept;

	void Print(ostream& out) const;
	void SetAuthor(const string& a);
	void SetTitle(const string& t);
	void SetAuthor(string&& a);
	void SetTitle(string&& t);
	string GetAuthor() const;
	string GetTitle() const;
	~Book();
};

