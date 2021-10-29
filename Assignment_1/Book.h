#ifndef BOOK_H
#define BOOK_H


class Book
{
public:
	Book();
	Book(std::string n, std::string pub, std::string t);
	void setAuthor(std::string name);
	void setPubDate(std::string date);
	void setTitle(std::string title);
	std::string getAuthor() const;
	std::string getPubDate() const;
	std::string getTitle() const;
	friend bool operator < (Book& lhs, Book& rhs);
	void display() const;
	~Book();

private:
	std::string authorName;
	std::string publicationDate;
	std::string bookTitle;
};


#endif // !BOOK_H

