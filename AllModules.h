/*
 * AllModules.h
 *
 *  Created on: 4 Aug 2020
 *      Author: louischeuk
 */

#ifndef ALLMODULES_H_
#define ALLMODULES_H_

class AllModules {
public:
	AllModules();
	double averageMark(double fme, double spm, double dynamics, double materials, double thermo, double enp, double fyp);
	void totalCredit(double creditFME, double creditSPM, double creditDynamics, double creditMaterials, double creditThermo, double creditEnP, double creditFYP);
	void averageTotalInfo(double averageMark);
	void getClass(double averageMark);
	void separateLine();

	void bestFourAverage(double(&array)[7]);

	virtual ~AllModules();
};

#endif /* ALLMODULES_H_ */
