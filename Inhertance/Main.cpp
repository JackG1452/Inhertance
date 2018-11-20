/*
* Main.cpp
*
* Version information
* Author: Dr. Shane Wilson
* Date:15/11/2017
* Description: Code to demonstrate inhertance - start code
*
* Copyright notice
*/
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Book.h"
#include "Publisher.h"
#include "Author.h"
#include "EBook.h"
#include "PhysicalBook.h"

using namespace std;

int main() {


	Book myBook{};

	EBook myEB{};

	PhysicalBook myPB{};

	PhysicalBook myPB2{0.8f, 18.5f, 23.1f, 0.8f, "Programming principles and practice using C++", 59.99f, "Addison Wesley"};


	/*Publisher Dalio{"Dalio Publishing"};

	Book myBook{};
	Author me{ "Shane", "Wilson" };
	cout << " name is: " << me.GetName();

		
	Book shanesBook{ "Learning C++ is so much fun", me };

	Dalio.AddBook(shanesBook);
*/

	return 0;
}