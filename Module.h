/*
 * Module.h
 *
 *  Created on: 28 Jul 2020
 *      Author: louischeuk
 */

#ifndef MODULES_H_
#define MODULES_H_

#include <iostream>
using namespace std;

class Module {
public:
	string name;
	Module();
	Module(string m_moduleName);
public:
	void markInfo(double m_moduleMark);
	double getCredit(double m_moduleMark);
	void creditInfo(double m_moduleMark);
	void passOrFail(double m_credit);
	void getClass(double m_moduleMark);
	void separateLine();
	virtual ~Module();
};

class Engineering: public Module {
public:
	string name2;
	Engineering(string m_moduleName);

public:
	void moduleInfo();
	double getCreditFYP(double m_moduleMark);
	virtual ~Engineering();
};

class Finance: public Module {

public:
	string name3;
	Finance(string m_moduleName);

public:
//	string toString3();
	void moduleInfo();
	virtual ~Finance();
};

#endif /* MODULES_H_ */
