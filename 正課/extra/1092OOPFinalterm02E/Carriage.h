#pragma once
#include <iostream>
#include <string>

using namespace std;

class Carriage {
public:
	Carriage* next;

	Carriage(string name, int passengerNum, string* passengerName) {
		this->name = name;
		this->passengerNum = passengerNum;
		this->passengerName = passengerName;
		next = nullptr;
	}
	~Carriage() {
		delete[] passengerName;
		cout << "Delete Carriage!\n";
	}

	int getPassengerNum() { return passengerNum; }
	string getName() { return name; }
	void printPassenger() {
		for (int i = 0; i < passengerNum; i++) {
			cout << passengerName[i];
			if (i != passengerNum - 1) cout << ' ';
		}
		cout << '\n';
	}
private:
	string name;
	int passengerNum;
	string* passengerName;
};