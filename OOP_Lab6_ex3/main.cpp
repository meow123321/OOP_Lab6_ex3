#include"PhoneBook.h"


int main() {
	PhoneBook MyPhoneBook;
	string name_to_find;
	string phone;

	cout << "Enter the name of the subcriber you look for: ";
	getline(cin, name_to_find);

	MyPhoneBook.Phone_Book.begin()->Search(name_to_find);

}