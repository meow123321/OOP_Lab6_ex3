#pragma once
#include<iostream>
#include<list>
#include<iterator>
#include<string>


using namespace std;

class Subscriber {
public:
	string name;
	string street_name;
	int number;
	string phone_number;

	Subscriber(string name, string street_name, int number, string phone_number);
	friend class PhoneBook;
	void Search(string name);
};
