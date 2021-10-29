#include<iostream>
#include<string>
#include"Book.h"

Book::Book()
{
	authorName = "";
	publicationDate = "";
	bookTitle = "";
}

Book::Book(std::string n, std::string pub, std::string t)
{
	authorName = n;
	publicationDate = pub;
	bookTitle = t;
}

void Book::setAuthor(std::string name)
{
	authorName = name;
}

void Book::setPubDate(std::string date)
{
	publicationDate = date;
}

void Book::setTitle(std::string title)
{
	bookTitle = title;
}

std::string Book::getAuthor() const
{
	return authorName;
}

std::string Book::getPubDate() const
{
	return publicationDate;
}

std::string Book::getTitle() const
{
	return bookTitle;
}


void Book::display() const
{
	std::cout << this->getAuthor() << "," << this->getTitle() << "," << this->getPubDate() << std::endl;

}

Book::~Book()
{
}

bool operator<(Book& lhs, Book& rhs)
{
	return lhs.getAuthor() < rhs.getAuthor();
}
