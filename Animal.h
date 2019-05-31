#pragma once
#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:
	int age;
	string vid;
};

class Dog : public Animal {

public:
	int agge;
	void let() {
		cout << "How old is the dog" << endl;
		cin >> age;
};

	class Cat : public Animal {
	public:
		int agge;
		void lett()
		{
			cout << "How old is the cat" << endl;
			cin >> age;
		}

};