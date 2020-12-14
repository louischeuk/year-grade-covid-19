/*
 * AllModules.cpp
 *
 *  Created on: 4 Aug 2020
 *      Author: louischeuk
 */

#include "AllModules.h"
#include <iostream>

using namespace std;

AllModules::AllModules() {
	cout << "** Here are the average mark and total credits of all modules you have taken this year. **" << endl;
}

double AllModules::averageMark(double fme, double spm, double dynamics, double materials, double thermo, double enp, double fyp) {
	double average= ((fme + spm + dynamics + materials + thermo + enp + fyp*2)/8) ;
	return average;
}

void AllModules::averageTotalInfo(double averageMark) {
	cout << "The average mark of final year is: " << averageMark << endl;
}

void AllModules::totalCredit(double creditFME, double creditSPM, double creditDynamics, double creditMaterials, double creditThermo, double creditEnP, double creditFYP) {
	double totalCredit = creditFME + creditSPM + creditDynamics + creditMaterials + creditThermo + creditEnP + creditFYP;
	cout << "Total credit you got this year: " << totalCredit << endl;
}

void AllModules::getClass(double averageMark) {
	if (averageMark > 70) {
		cout << "you got a 1st this year." << endl;
	} else if (averageMark >60 && averageMark <70) {
		cout << "you got a 2:1 this year." << endl;
	} else if (averageMark >50 && averageMark <60) {
		cout << "you got a 2:2 this year." << endl;
	} else {
		cout << "RIP for this module" << endl;
	}
}

void AllModules::separateLine() {
	cout << "---------------" << endl;

}

void AllModules::bestFourAverage(double (&array)[7]) {
	double sum = 0;
	int n = sizeof(array) / sizeof(double);

	sort(array, array+ n); // sort the array in ascending order

	for (size_t i=(n-1); i > 2; --i ) {
		sum += array[i];
	}

	double bestFour = sum / 4;
	cout << "Regarding the covid19 safety net policy, average will be calculated from the best 60 credits. "  << endl;
	cout << "The adjusted average mark: " << bestFour << endl;

}



AllModules::~AllModules() {
	cout << endl << "** Congratulations for your result. We hope you got what you deserved. **" << endl << endl;
}

