#include "Book.h"
#include <initializer_list>
using namespace std;

class Library {
	Book* array;
	size_t size;
protected:
	friend ostream& operator<<(ostream& ostr, const Library& l);
public:
	Library();
	Library(std::initializer_list<Book> list);
	Library(const Library& orig);
	Library(Library&& orig);
	Library& operator=(const Library& right);
	Library& operator=(Library&& right);
	Book& operator[](size_t index);
	const Book& operator[](size_t index) const;
	size_t GetSize() const;
	~Library();
	
};
