#include"PhoneBook.h"

int main() {
	PhoneBook MyPhoneBook;
	string name_to_find;
	string phone;

	cout << "Enter the name of the subcriber you look for: ";
	getline(cin, name_to_find);

	for (auto i = MyPhoneBook.Phone_Book.begin(); i != MyPhoneBook.Phone_Book.end(); i++) {
		MyPhoneBook.Phone_Book.Search(name_to_find;)
	}
	

}