#include <string>
using namespace std;

class Book{
	string author, title;
protected:
	friend ostream& operator<<(ostream& os, const Book& b);
public:
	
	Book();
	Book(string a, string t);
	Book(const Book& other);
	Book(Book&& other) ;
	Book& operator=(const Book& other);
	Book& operator=(Book&& other);

	void Print(ostream& out) const;
	void SetAuthor(string a);
	void SetTitle(string t);
	string GetAuthor() const;
	string GetTitle() const;
	~Book();
};

