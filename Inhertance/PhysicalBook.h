#pragma once
#include<iostream>
#include"Book.h"//Include the base class header file
class PhysicalBook :public Book {

private:
	float width_;
	float height_;
	float length_;
	float weight_;

public:
	PhysicalBook();
	PhysicalBook(float width, float height, float length, float weight, std::string bookTitle, float price, std::string publisher);
	~PhysicalBook();
};