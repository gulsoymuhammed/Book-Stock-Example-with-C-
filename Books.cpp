#include "Books.h"
#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
Books::Books()
{
	stockNumber = 0;
	priceOfBook = 10;
	string strUndefined = "undefined";
	strcpy_s(authorName, strUndefined.c_str());
	strcpy_s(publisherName, strUndefined.c_str());
	strcpy_s(bookName, strUndefined.c_str());
}

Books::~Books()
{
}

Books::Books(string prBookName, string prAuthorName, string prPublisherName)
{
	stockNumber = 0;
	priceOfBook = 10;
	strcpy_s(authorName, prAuthorName.c_str());
	strcpy_s(publisherName, prPublisherName.c_str());
	strcpy_s(bookName, prBookName.c_str());

}



int Books::getStockNumber()
{
	return stockNumber;
}

void Books::setStockNumber(int prStockNumber)
{
	stockNumber = prStockNumber;
}

void Books::loadBooks()
{
	cout<< "\nEnter Book Name:";
	cin >> bookName;
	cout << "Enter Author Name:";
	cin >> authorName;
	cout << "Enter Publisher Name:";
	cin >> publisherName;
	cout << "Enter Price :";
	cin >> priceOfBook;
	cout << "Enter Stock Number:";
	int tempStockNumber;
	cin >> tempStockNumber;
	setStockNumber(tempStockNumber);
}

void Books::displayBookList()
{
	cout << "\nName of the Book:" << bookName;
	cout << "\nAuthor of the Book:" << authorName;
	cout << "\nPublisher of the Book:" << publisherName;
	cout << "\nPrice of the Book:" << priceOfBook;
	cout << "\nStock Present:" << stockNumber;
	cout << "\n-----------------------------------\n";
}
