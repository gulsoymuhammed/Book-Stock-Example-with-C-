#pragma once
#include<iostream>
class Books

{
public:
	Books();
	~Books();
	Books(std::string,std::string,std::string);
	//Books(std::string, std::string,std::string = "defaultPublisherName");
	int getStockNumber();
	void setStockNumber(int);
	char authorName[200], publisherName[20];
	char bookName[20];
	float priceOfBook;
	void loadBooks();
	void displayBookList();
private:
	int stockNumber = 0;
};

