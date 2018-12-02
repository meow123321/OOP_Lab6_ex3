#include"Subscriber.h"

Subscriber::Subscriber(string name, string street_name, int number, string phone_number) {
	this->name = name;
	this->street_name = street_name;
	this->number = number;
	this->phone_number = phone_number;

}

void Subscriber::Search(string name) {
	if (name == this->name) {
		cout << name << ": " << this->number;

	}
}