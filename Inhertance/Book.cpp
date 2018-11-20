#pragma once
#include "Book.h"

Book::Book() {
	std::cout << "Book constructor called" << std::endl;
}

Book::Book(std::string title) :
	title_{ title } {
	std::cout << "Base class Book constructor 1 called" << std::endl;
}

Book::Book(std::string title, Author author) :
	title_{ title }, author_{ author } {
	std::cout << "Base class Book constructor 2 called" << std::endl;
}


Book::Book(std::string title, Author author, std::string  publisher, std::string isbn13, float price) :
	title_{ title }, author_{ author }, publisher_ {publisher}, isbn13_{ isbn13 }, price_{ price } {
	std::cout << "Base class Book constructor 3 called" << std::endl;
}

//Default destructor
Book::~Book() { 
	//std::cout << "Destructor called on " << this->GetTitle() << std::endl; 
	std::cout << "Destructor called on base book object" << std::endl; 
}

std::string Book::GetTitle() { 
	return title_; 
};

void Book::SetTitle(std::string title) {
	title_ = title;
}

Author Book::GetAuthor() {
	return author_;
}
void Book::SetAuthor(Author author) {
	author_ = author;
}


std::string  Book::GetPublisher() const {
	return publisher_;
}

void Book::SetPublisher(std::string  publisher) {
	publisher_ = publisher;
}



