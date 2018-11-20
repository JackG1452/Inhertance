#include "PhysicalBook.h"

PhysicalBook::PhysicalBook() :Book("The C++ Programming Language"){
	std::cout << "Derived class Physical Book constructor called" << std::endl;
}

PhysicalBook::PhysicalBook(float width, float height, float length, float weight, std::string bookTitle, float price, std::string publisher)
	: Book(bookTitle), weight_(weight), width_(width), length_(length), height_(height)
{
	std::cout << "Derived class Physical Book constructor called" << std::endl;

	this->SetPublisher(publisher);
	this->SetPrice(price);
}


PhysicalBook::~PhysicalBook() {

	std::cout << "Derived class Physical Book destructor called" << std::endl;
}