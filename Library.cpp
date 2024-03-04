#include "Library.h"
#include <iostream>
#include <string>
#include <initializer_list>

using namespace std;

Library::Library() {

}

//Constructor with an initializer list
Library::Library(initializer_list<Book> list) 
	: size{ list.size() }, array{ new Book[list.size()] }
{
	std::size_t i = 0;
	for (Book v : list)
	{
		array[i] = v;
		i++;
	}
}

//Copy constructor
Library::Library(const Library& orig)
	: size(orig.size), array{ new Book[orig.size] } {
		for (std::size_t i = 0; i < size; i++)
			array[i] = orig.array[i];
}


//move constructor
Library::Library(Library&& orig){
array = orig.array;
size = orig.size;
orig.array = nullptr; 
orig.size = 0;
 }

//Copy assignment operator
Library& Library::operator=(const Library& right){
	Library tmp = right;
	swap(array, tmp.array);
	swap(size, tmp.size);
	return *this;
}

//Move assignment operator
Library& Library::operator=(Library&& right){
	swap(array, right.array); 
	swap(size, right.size); 
	return *this;
}

Book& Library::operator[](size_t index){
	return array[index];
}

const Book& Library::operator[](size_t index) const{
	return array[index];
}

size_t Library::GetSize() const{
	return size_t();
}

ostream& operator<<(std::ostream& ostr, const Library& l) {
	for (std::size_t i = 0; i < l.GetSize(); i++){
		if (i > 0)
			ostr << ',';
		ostr << l[i];
	}
	return ostr;
}

Library::~Library(){
}





