#pragma once
#include<string>
#include"Book.h"//Include the base class header file
class EBook :public Book {

private:
	std::string format_;
	float fileSize_;
	std::string language_;
	bool enchancedTypeSetting_;
	bool screenReaderSupport_;

public:
	EBook();
	~EBook();
};