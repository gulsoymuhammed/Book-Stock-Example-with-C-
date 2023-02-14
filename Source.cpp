#include<iostream>
#include<conio.h>
#include<string.h>
#include<process.h>
#include"Books.h"
using namespace std;

int main() {
	Books myBooks[10];
	Books myBook;
	Books myBook2("C++ How to Program","Harvey Deitel and Paul Deitel","Pearson");
	Books myBook3("myBook3","Author3","Publisher3");
	int menuChoice, numberOfBooks;
	cout << "myBook.bookName "<< myBook.bookName << endl;
	cout << "myBook.authorName "<< myBook.authorName << endl;
	cout << "myBook.publisherName "<< myBook.publisherName << endl;
	cout << "myBook.stock "<< myBook.getStockNumber() << endl;
	cout << "myBook.priceOfBook "<< myBook.priceOfBook << endl;

	cout << "myBook2.bookName " << myBook2.bookName << endl;
	cout << "myBook2.authorName " << myBook2.authorName << endl;
	cout << "myBook2.publisherName " << myBook2.publisherName << endl;
	cout << "myBook2.stock " << myBook2.getStockNumber() << endl;
	cout << "myBook2.priceOfBook " << myBook2.priceOfBook << endl;


	cout << "myBook3.bookName " << myBook3.bookName << endl;
	cout << "myBook3.authorName " << myBook3.authorName << endl;
	cout << "myBook3.publisherName " << myBook3.publisherName << endl;
	cout << "myBook3.stock " << myBook3.getStockNumber() << endl;
	cout << "myBook3.priceOfBook " << myBook3.priceOfBook << endl;




	do
	{
		cout << "\n******\n";
		cout << "\n1.Load Books\n2.Display\n3.Search\n4.Exit\n";
		cout << "\nEnter your Choice:";
		cin >> menuChoice;
		switch (menuChoice)
		{
		case 1:
			cout << "Enter Number of Books:";
			cin >> numberOfBooks;
			for (int i = 0; i < numberOfBooks; i++)
			{
				myBooks[i].loadBooks();
			}			
			break;
		case 2:
			for (int i = 0; i < numberOfBooks; i++)
			{
				myBooks[i].displayBookList();
			}
			break;
		case 3:
			char searchBookName[20], searchAuthorName[20];
			cout << "Enter the name of the Book:";
			cin >> searchBookName;
			cout << "Enter the name of the Author";
			cin >> searchAuthorName;
			for (int i = 0; i < numberOfBooks; i++)
			{
				cout << "i:" << i << endl;
				if (!(strcmp(searchBookName, myBooks[i].bookName)) && !(strcmp(searchAuthorName, myBooks[i].authorName))) {

					cout << "\nBook is present";
					cout << "\nName of the Book:" << myBooks[i].bookName;
					cout << "\nAuthor of the Book:" << myBooks[i].authorName;
					cout << "\Publisher of the Book:" << myBooks[i].publisherName;
					cout << "\Price of the Book:" << myBooks[i].priceOfBook;
					cout << "\nStock Present:" << myBooks[i].getStockNumber();
					cout << "\n-----------------------------------\n";
					break;
				}
				else if (i == numberOfBooks - 1) {
					cout << "The book is not present!" << endl;

				}
			}
			break;
		default:
			cout << "Enter a valid choice!!";
		case 4:
			exit(1);

		}
		

	} while (1);



	return 0;
}