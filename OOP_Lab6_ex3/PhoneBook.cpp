#include"PhoneBook.h"

PhoneBook ::PhoneBook(){
	Phone_Book.push_back(Subscriber("Arya Stark", "Winterfell", 12, "0762355431"));
	Phone_Book.push_back(Subscriber("John Snow", "Winterfell", 20, "0786544348"));
	Phone_Book.push_back(Subscriber("Tyrion Lannister", "Casterly Rock", 3, "0723541766"));
	Phone_Book.push_back(Subscriber("Brienne of Tarth", "Evenfall Hall", 30, "07654377654"));
}

