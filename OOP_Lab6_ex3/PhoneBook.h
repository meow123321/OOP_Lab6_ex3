#pragma once
#include"Subscriber.h"
#include<iostream>
#include<list>
#include<iterator>

using namespace std;

class PhoneBook{
public:
	list<Subscriber> Phone_Book;

	PhoneBook();
	friend void Subscriber::Search(string name);

};
