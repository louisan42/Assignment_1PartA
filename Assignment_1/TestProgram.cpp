#include<iostream>
#include<vector>
#include<string>
#include<memory>
#include<algorithm>
#include"Book.h"

void AddNewBook(std::vector<Book>* bookdata);
void PrintBooks(std::vector<Book>& bookdata);
void SortBooks(std::vector<Book>& bookdata);
void PrintMenu();


int main() {
	int choice{ 0 };
	bool quit = false;
	std::vector<Book> bookdata;
	
	while (!quit)
	{
		PrintMenu();
		std::cout << "Choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{
		case 1:
			AddNewBook(&bookdata);
			break;
		case 2:
			if (bookdata.empty()) {
				std::cout << "Book collection is empty!" << std::endl;
			}
			else {
				SortBooks(bookdata);
				std::cout << "The books entered so far, sorted alphabetically by author are:\n";
				PrintBooks(bookdata);
			}

			
			break;
		case 3:
			quit = true;
			break;
		default:
			std::cout << "Invalid entry!" << std::endl;
			break;
		}

	}



	return 0;
}

void AddNewBook(std::vector<Book>* bookdata)
{
	std::string author="", title="", date="";
	std::cout << "Enter title: ";
	std::getline(std::cin>>std::ws, title);
	std::cout << "Enter author: ";
	std::getline(std::cin>>std::ws, author);
	std::cout << "Enter date: ";
	std::cin >> date;

	Book bb(author, date, title);
	bookdata->push_back(bb);
}

void PrintBooks(std::vector<Book>& bookdata)
{
	
	
		for (auto book : bookdata) {
			book.display();
		}
	
}
	

void SortBooks(std::vector<Book>& bookdata)
{
	std::sort(bookdata.begin(), bookdata.end());
}

void PrintMenu()
{
	std::cout << "--------------------------------------------------------------------\n"
		<< "                     Book Test program                      \n"
		<< "--------------------------------------------------------------------\n"
		<< "Select from the following choices:\n"
		<< "1. Add new book\n"
		<< "2. print listing sorted by author\n"
		<< "3. Quit\n";
	
}
