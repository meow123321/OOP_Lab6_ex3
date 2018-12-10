#pragma once
#include<iostream>
#include<list>
#include<iterator>
#include"PhoneBook.h"


using namespace std;

class Subscriber {
public:
	string name;
	string street_name;
	int number;
	string phone_number;

	friend class PhoneBook;

	Subscriber(string name, string street_name, int number, string phone_number);
	void Search(string name);
};
