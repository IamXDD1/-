#pragma once
#include <string>
#include "Carriage.h"

using namespace std;

class Train {
public:
	Carriage* end;
	Carriage* root;

	Train() {
		root = nullptr;
		end = nullptr;
	}

	void pushCarriage(string name, int passengerNum, string* passengerName) {
		if (root == nullptr) {
			root = new Carriage(name, passengerNum, passengerName);
			end = root;
			return;
		}
		end->next = new Carriage(name, passengerNum, passengerName);
		end = end->next;
	}
	void checkPassenger(string name) {
		Carriage* temp = root;
		for(;temp != nullptr; temp = temp->next){
			if (name == temp->getName()) {
				temp->printPassenger();
				return;
			}
		}
		cout << "Carriage does not exist!\n";
	}
	void deleteCarriage(string name) {
		if (root != nullptr) {
			Carriage* curr = root;
			if (name == curr->getName()) {
				if (end == root) end = curr->next;
				root = curr->next;
				delete curr;
				return;
			}

			for (; curr->next != nullptr; curr = curr->next) {
				if (name == curr->next->getName()) {
					Carriage* temp = curr->next;
					curr->next = temp->next;
					delete temp;
					return;
				}
			}
		}
		cout << "Carriage does not exist!\n";
	}
	Carriage* getCarriage(std::string name) {
		Carriage* curr = root;
		for (; curr != nullptr; curr = curr->next) {
			if (name == curr->getName()) {
				return curr;
			}
		}
		cout << "Carriage does not exist!\n";
		return 0;
	}
};