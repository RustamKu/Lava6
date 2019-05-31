#pragma once
#include <iostream>
#include <string>
using namespace std;
class Student
{
protected:
	string name;
	string spec;
	int kurs;
public:
	void stud() {
		cout << "student name : " << endl;
		cin >> name;
		cout << "student specialnost : " << endl;
		cin >> spec;
		cout << "kurs :" << endl;
	}
	void stud2() {
		cout << "name student : " << name << endl;
		cout << "spec student : " << spec << endl;
		cout << "kurs student : " << kurs << endl;
	}
};

class Starosta : public Student {
public:
	int colvo;
	string name_of_group;

	void starostaa() {
		cout << "How much people in your group ? " << endl;
		cin >> colvo;
		cout << "What is name of your group ? " << endl;
		cin >> name_of_group;

	}
	void starosta2 () {
		cout << "number of people : " << colvo << endl;
		cout << "name of group" << name_of_group << endl;
	}
};