#include"Subscriber.h"
#include"PhoneBook.h"

Subscriber::Subscriber(string name, string street_name, int number, string phone_number) {
	this->name = name;
	this->street_name = street_name;
	this->number = number;
	this->phone_number = phone_number;

}

void Subscriber::Search(string name) {
	for (auto it = PhoneBook::Phone_Book.begin(); it != PhoneBook::Phone_Book.end(); it++) {
		if (it->name == name) {
			cout << it->phone_number << endl;
		}
	}
}