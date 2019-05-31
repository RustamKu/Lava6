#include <iostream>
#include <string>

using namespace std;

class Alive
{
protected:
	
public:
	string vid;
	string name;
	string country;
};

class Bird : public Alive {

public:
	void birdd() {
		cout << "Enter bird name : " << endl;
		cin >> name;
		cout << "Enter bird species : " << endl;
		cin >> vid;
		cout << "Enter bird country: " << endl;
		cin >> country;
};

class Fish : public Alive {

public:
	void fishh() {
		cout << "Enter fish name : " << endl;
		cin >> name;
		cout << "Enter fish species : " << endl;
		cin >> vid;
	}
};

class Animals : public Alive {

public:
	void animall() 
	{
		cout << "Enter animal name : " << endl;
		cin >> name;
		cout << "Enter animal species : " << endl;
		cin >> vid;
		cout << "Enter animal country: " << endl;
		cin >> country;
	}
};
