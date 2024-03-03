#include "Book.h"
#include <initializer_list>
using namespace std;

class Library {
	/* ...................... */
public:
	Library();
	Library(std::initializer_list<Book> list);
	Library(const Library& orig);
	Library(Library&& orig);
	Library& operator=(const Library& right);
	Library& operator=(Library&& right);
	Book& operator[](std::size_t index);
	const Book& operator[](std::size_t index) const;
	std::size_t GetSize() const;
	~Library();
	//Only for the list implementation
	void push_back(const Book&);
	void push_back(Book&&);
	Book pop_back();
};
