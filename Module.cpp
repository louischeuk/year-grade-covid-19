/*
 * Modules.cpp
 *
 *  Created on: 28 Jul 2020
 *      Author: louischeuk
 */

#include "Module.h"
#include <iostream>
#include <sstream>
using namespace std;


Module::Module():name("Module without name specified") {
};

Module::Module(string m_moduleName) {
	this->name = m_moduleName;
}

void Module::markInfo(double m_moduleMark) {
	cout << "Mark of this module: " << m_moduleMark << endl;
}

double Module::getCredit(double m_moduleMark) {

	double credit;

	if (m_moduleMark >= 40) {
		credit = 15;
	} else {
		credit = 0;
	}

	return credit;
}

void Module::creditInfo(double m_credit) {

	cout << "The credit you got for this module: " << m_credit << " credits."<< endl;
}

void Module::passOrFail(double m_credit) {

	if (m_credit != 0) {
		cout << "You passed this module." << endl;
	} else {
		cout << "You failed this module..." << endl;
	}
}

void Module::getClass(double m_moduleMark) {
	if (m_moduleMark >= 70) {
		cout << "You got a 1st for this module." << endl;
	} else if (m_moduleMark >= 60 && m_moduleMark < 70) {
		cout << "You got a 2:1 for this module." << endl;
	} else if (m_moduleMark >= 50 && m_moduleMark < 60) {
		cout << "You got a 2:2 for this module." << endl;
	} else if (m_moduleMark >= 40 && m_moduleMark < 50) {
		cout << "You got a 3rd for this module." << endl;
	} else {
		cout << "No class for this module." << endl;
	}
}

void Module::separateLine() {
	cout << "-----------------------------" << endl << endl;
}

Module::~Module() {
}


Engineering::Engineering(string m_moduleName) {
	this->name2 = m_moduleName;
	cout << "** One engineering module is created. **" << endl;
}

void Engineering::moduleInfo() {
	cout << "Name of module: " << name2 << endl;
}

double Engineering::getCreditFYP(double m_moduleMark) {

	double credit;

	if (m_moduleMark >= 40) {
		credit = 30;
	} else {
		credit = 0;
	}

	return credit;
}

Engineering::~Engineering() {
	cout << "Engineering module is destroyed." << endl;
}


Finance::Finance(string m_moduleName) {
	this->name3 = m_moduleName;
	cout << "** One finance module is created. **" << endl;
}

//string Finance::toString3() {
//	stringstream ss;
//	ss << name3;
//
//	return ss.str();
//}

void Finance::moduleInfo() {
//	cout << "Name of module: " << toString3() << endl;
	cout << "Name of module: " << name3 << endl;
}

Finance::~Finance() {
	cout << "Finance module is destroyed." << endl;
}
